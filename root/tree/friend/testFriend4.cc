{
// gROOT->ProcessLine(".T");
TChain ch("T");
ch.Add("Event.root");
TChain as("ntp1");
as.Add("MC*.root");

ch.AddFriend("ntp1");

ch.SetBranchStatus("eTotalEmc",0);

int res = ch.GetBranchStatus("eTotalEmc");
if (res!=0) {
   fprintf(stderr,"Error the status of the friend branch was not properly set!\n");
   gApplication->Terminate(1);
}

ch.SetBranchStatus("eTotalEmc",1);

res = ch.GetBranchStatus("eTotalEmc");
if (res!=1) {
   fprintf(stderr,"Error the status of the friend branch was not properly reset!\n");
   gApplication->Terminate(1);
}
gApplication->Terminate(0);

}
