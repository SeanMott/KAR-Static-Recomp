//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803FB6F4(PPC::Runtime::GCContext* context)
{
/*803FB6F4 003F84F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803FB6F8 003F84F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FB6FC 003F84FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FB700 003F8500*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803FB704 003F8504*/ PPC::Runtime::ASM::bl(_savegpr_25);
/* 803FB708 003F8508  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*803FB70C 003F850C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*803FB710 003F8510*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*803FB714 003F8514*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*803FB718 003F8518*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*803FB71C 003F851C*/ PPC::Runtime::ASM::beq(.L_803FBDBC);
/*803FB720 003F8520*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r28, 0, 30, 30);
/*803FB724 003F8524*/ PPC::Runtime::ASM::beq(.L_803FB864);
/*803FB728 003F8528*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x84, context->r27));
/*803FB72C 003F852C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FB730 003F8530*/ PPC::Runtime::ASM::beq(.L_803FB864);
/*803FB734 003F8534*/ PPC::Runtime::ASM::cmplwi(context->r30, 0xb);
/*803FB738 003F8538*/ PPC::Runtime::ASM::bgt(.L_803FB864);
/*803FB73C 003F853C*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502D24 @ Get_MemoryOffset_HighBit);
/*803FB740 003F8540*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803FB744 003F8544*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502D24 @ Get_MemoryOffset_LowBit);
/*803FB748 003F8548*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FB74C 003F854C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FB750 003F8550*/ PPC::Runtime::ASM::bctr();
/*803FB754 003F8554*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB758 003F8558*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB75C 003F855C*/ PPC::Runtime::ASM::bctrl();
/*803FB760 003F8560*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB764 003F8564*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB768 003F8568*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB76C 003F856C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB770 003F8570*/ PPC::Runtime::ASM::bctrl();
/*803FB774 003F8574*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB778 003F8578*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB77C 003F857C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB780 003F8580*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB784 003F8584*/ PPC::Runtime::ASM::bctrl();
/*803FB788 003F8588*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB78C 003F858C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB790 003F8590*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB794 003F8594*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB798 003F8598*/ PPC::Runtime::ASM::bctrl();
/*803FB79C 003F859C*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB7A0 003F85A0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB7A4 003F85A4*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB7A8 003F85A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB7AC 003F85AC*/ PPC::Runtime::ASM::bctrl();
/*803FB7B0 003F85B0*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB7B4 003F85B4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB7B8 003F85B8*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB7BC 003F85BC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803FB7C0 003F85C0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB7C4 003F85C4*/ PPC::Runtime::ASM::bctrl();
/*803FB7C8 003F85C8*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB7CC 003F85CC*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB7D0 003F85D0*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB7D4 003F85D4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB7D8 003F85D8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB7DC 003F85DC*/ PPC::Runtime::ASM::bctrl();
/*803FB7E0 003F85E0*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB7E4 003F85E4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB7E8 003F85E8*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB7EC 003F85EC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB7F0 003F85F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB7F4 003F85F4*/ PPC::Runtime::ASM::bctrl();
/*803FB7F8 003F85F8*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB7FC 003F85FC*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB800 003F8600*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB804 003F8604*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB808 003F8608*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB80C 003F860C*/ PPC::Runtime::ASM::bctrl();
/*803FB810 003F8610*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB814 003F8614*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB818 003F8618*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB81C 003F861C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB820 003F8620*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803FB824 003F8624*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB828 003F8628*/ PPC::Runtime::ASM::bctrl();
/*803FB82C 003F862C*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB830 003F8630*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB834 003F8634*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB838 003F8638*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB83C 003F863C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803FB840 003F8640*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB844 003F8644*/ PPC::Runtime::ASM::bctrl();
/*803FB848 003F8648*/ PPC::Runtime::ASM::b(.L_803FB864);
/*803FB84C 003F864C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB850 003F8650*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*803FB854 003F8654*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB858 003F8658*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803FB85C 003F865C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB860 003F8660*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FB864, 0x803FB864) //this is a jump label
/*803FB864 003F8664*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r27));
/*803FB868 003F8668*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803FB86C 003F866C*/ PPC::Runtime::ASM::beq(.L_803FBB10);
/*803FB870 003F8670*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r28, 0, 20, 20);
/*803FB874 003F8674*/ PPC::Runtime::ASM::beq(.L_803FB9B4);
/*803FB878 003F8678*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*803FB87C 003F867C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FB880 003F8680*/ PPC::Runtime::ASM::beq(.L_803FB9B4);
/*803FB884 003F8684*/ PPC::Runtime::ASM::cmplwi(context->r30, 0xb);
/*803FB888 003F8688*/ PPC::Runtime::ASM::bgt(.L_803FB9B4);
/*803FB88C 003F868C*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502CF4 @ Get_MemoryOffset_HighBit);
/*803FB890 003F8690*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803FB894 003F8694*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502CF4 @ Get_MemoryOffset_LowBit);
/*803FB898 003F8698*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FB89C 003F869C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FB8A0 003F86A0*/ PPC::Runtime::ASM::bctr();
/*803FB8A4 003F86A4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB8A8 003F86A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB8AC 003F86AC*/ PPC::Runtime::ASM::bctrl();
/*803FB8B0 003F86B0*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB8B4 003F86B4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB8B8 003F86B8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB8BC 003F86BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB8C0 003F86C0*/ PPC::Runtime::ASM::bctrl();
/*803FB8C4 003F86C4*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB8C8 003F86C8*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB8CC 003F86CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB8D0 003F86D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB8D4 003F86D4*/ PPC::Runtime::ASM::bctrl();
/*803FB8D8 003F86D8*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB8DC 003F86DC*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB8E0 003F86E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB8E4 003F86E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB8E8 003F86E8*/ PPC::Runtime::ASM::bctrl();
/*803FB8EC 003F86EC*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB8F0 003F86F0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB8F4 003F86F4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB8F8 003F86F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB8FC 003F86FC*/ PPC::Runtime::ASM::bctrl();
/*803FB900 003F8700*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB904 003F8704*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB908 003F8708*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB90C 003F870C*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FB910 003F8710*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB914 003F8714*/ PPC::Runtime::ASM::bctrl();
/*803FB918 003F8718*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB91C 003F871C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB920 003F8720*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB924 003F8724*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB928 003F8728*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB92C 003F872C*/ PPC::Runtime::ASM::bctrl();
/*803FB930 003F8730*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB934 003F8734*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB938 003F8738*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB93C 003F873C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB940 003F8740*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB944 003F8744*/ PPC::Runtime::ASM::bctrl();
/*803FB948 003F8748*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB94C 003F874C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB950 003F8750*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB954 003F8754*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB958 003F8758*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB95C 003F875C*/ PPC::Runtime::ASM::bctrl();
/*803FB960 003F8760*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB964 003F8764*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB968 003F8768*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB96C 003F876C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB970 003F8770*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FB974 003F8774*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB978 003F8778*/ PPC::Runtime::ASM::bctrl();
/*803FB97C 003F877C*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB980 003F8780*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB984 003F8784*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB988 003F8788*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB98C 003F878C*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FB990 003F8790*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB994 003F8794*/ PPC::Runtime::ASM::bctrl();
/*803FB998 003F8798*/ PPC::Runtime::ASM::b(.L_803FB9B4);
/*803FB99C 003F879C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB9A0 003F87A0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FB9A4 003F87A4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FB9A8 003F87A8*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FB9AC 003F87AC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB9B0 003F87B0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FB9B4, 0x803FB9B4) //this is a jump label
/*803FB9B4 003F87B4*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*803FB9B8 003F87B8*/ PPC::Runtime::ASM::rlwinm(context->r25, context->r28, 0, 22, 22);
/*803FB9BC 003F87BC*/ PPC::Runtime::ASM::b(.L_803FBB08);
RUNTIME_PPC_JUMP_LABEL(.L_803FB9C0, 0x803FB9C0) //this is a jump label
/*803FB9C0 003F87C0*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*803FB9C4 003F87C4*/ PPC::Runtime::ASM::beq(.L_803FBB04);
/*803FB9C8 003F87C8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*803FB9CC 003F87CC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FB9D0 003F87D0*/ PPC::Runtime::ASM::beq(.L_803FBB04);
/*803FB9D4 003F87D4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0xb);
/*803FB9D8 003F87D8*/ PPC::Runtime::ASM::bgt(.L_803FBB04);
/*803FB9DC 003F87DC*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502CC4 @ Get_MemoryOffset_HighBit);
/*803FB9E0 003F87E0*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803FB9E4 003F87E4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502CC4 @ Get_MemoryOffset_LowBit);
/*803FB9E8 003F87E8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FB9EC 003F87EC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FB9F0 003F87F0*/ PPC::Runtime::ASM::bctr();
/*803FB9F4 003F87F4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FB9F8 003F87F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FB9FC 003F87FC*/ PPC::Runtime::ASM::bctrl();
/*803FBA00 003F8800*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA04 003F8804*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA08 003F8808*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBA0C 003F880C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA10 003F8810*/ PPC::Runtime::ASM::bctrl();
/*803FBA14 003F8814*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA18 003F8818*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA1C 003F881C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBA20 003F8820*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA24 003F8824*/ PPC::Runtime::ASM::bctrl();
/*803FBA28 003F8828*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA2C 003F882C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA30 003F8830*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBA34 003F8834*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA38 003F8838*/ PPC::Runtime::ASM::bctrl();
/*803FBA3C 003F883C*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA40 003F8840*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA44 003F8844*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBA48 003F8848*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA4C 003F884C*/ PPC::Runtime::ASM::bctrl();
/*803FBA50 003F8850*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA54 003F8854*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA58 003F8858*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBA5C 003F885C*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBA60 003F8860*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA64 003F8864*/ PPC::Runtime::ASM::bctrl();
/*803FBA68 003F8868*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA6C 003F886C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA70 003F8870*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBA74 003F8874*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBA78 003F8878*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA7C 003F887C*/ PPC::Runtime::ASM::bctrl();
/*803FBA80 003F8880*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA84 003F8884*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBA88 003F8888*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBA8C 003F888C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBA90 003F8890*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBA94 003F8894*/ PPC::Runtime::ASM::bctrl();
/*803FBA98 003F8898*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBA9C 003F889C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBAA0 003F88A0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBAA4 003F88A4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBAA8 003F88A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBAAC 003F88AC*/ PPC::Runtime::ASM::bctrl();
/*803FBAB0 003F88B0*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBAB4 003F88B4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBAB8 003F88B8*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBABC 003F88BC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBAC0 003F88C0*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBAC4 003F88C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBAC8 003F88C8*/ PPC::Runtime::ASM::bctrl();
/*803FBACC 003F88CC*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBAD0 003F88D0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBAD4 003F88D4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBAD8 003F88D8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBADC 003F88DC*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBAE0 003F88E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBAE4 003F88E4*/ PPC::Runtime::ASM::bctrl();
/*803FBAE8 003F88E8*/ PPC::Runtime::ASM::b(.L_803FBB04);
/*803FBAEC 003F88EC*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBAF0 003F88F0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBAF4 003F88F4*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBAF8 003F88F8*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBAFC 003F88FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBB00 003F8900*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FBB04, 0x803FBB04) //this is a jump label
/*803FBB04 003F8904*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_803FBB08, 0x803FBB08) //this is a jump label
/*803FBB08 003F8908*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803FBB0C 003F890C*/ PPC::Runtime::ASM::bne(.L_803FB9C0);
RUNTIME_PPC_JUMP_LABEL(.L_803FBB10, 0x803FBB10) //this is a jump label
/*803FBB10 003F8910*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*803FBB14 003F8914*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803FBB18 003F8918*/ PPC::Runtime::ASM::beq(.L_803FBDBC);
/*803FBB1C 003F891C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r28, 0, 20, 20);
/*803FBB20 003F8920*/ PPC::Runtime::ASM::beq(.L_803FBC60);
/*803FBB24 003F8924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*803FBB28 003F8928*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FBB2C 003F892C*/ PPC::Runtime::ASM::beq(.L_803FBC60);
/*803FBB30 003F8930*/ PPC::Runtime::ASM::cmplwi(context->r30, 0xb);
/*803FBB34 003F8934*/ PPC::Runtime::ASM::bgt(.L_803FBC60);
/*803FBB38 003F8938*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502C94 @ Get_MemoryOffset_HighBit);
/*803FBB3C 003F893C*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803FBB40 003F8940*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502C94 @ Get_MemoryOffset_LowBit);
/*803FBB44 003F8944*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FBB48 003F8948*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FBB4C 003F894C*/ PPC::Runtime::ASM::bctr();
/*803FBB50 003F8950*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBB54 003F8954*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBB58 003F8958*/ PPC::Runtime::ASM::bctrl();
/*803FBB5C 003F895C*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBB60 003F8960*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBB64 003F8964*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBB68 003F8968*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBB6C 003F896C*/ PPC::Runtime::ASM::bctrl();
/*803FBB70 003F8970*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBB74 003F8974*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBB78 003F8978*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBB7C 003F897C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBB80 003F8980*/ PPC::Runtime::ASM::bctrl();
/*803FBB84 003F8984*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBB88 003F8988*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBB8C 003F898C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBB90 003F8990*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBB94 003F8994*/ PPC::Runtime::ASM::bctrl();
/*803FBB98 003F8998*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBB9C 003F899C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBBA0 003F89A0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBBA4 003F89A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBBA8 003F89A8*/ PPC::Runtime::ASM::bctrl();
/*803FBBAC 003F89AC*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBBB0 003F89B0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBBB4 003F89B4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBBB8 003F89B8*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FBBBC 003F89BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBBC0 003F89C0*/ PPC::Runtime::ASM::bctrl();
/*803FBBC4 003F89C4*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBBC8 003F89C8*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBBCC 003F89CC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBBD0 003F89D0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBBD4 003F89D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBBD8 003F89D8*/ PPC::Runtime::ASM::bctrl();
/*803FBBDC 003F89DC*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBBE0 003F89E0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBBE4 003F89E4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBBE8 003F89E8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBBEC 003F89EC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBBF0 003F89F0*/ PPC::Runtime::ASM::bctrl();
/*803FBBF4 003F89F4*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBBF8 003F89F8*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBBFC 003F89FC*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBC00 003F8A00*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBC04 003F8A04*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBC08 003F8A08*/ PPC::Runtime::ASM::bctrl();
/*803FBC0C 003F8A0C*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBC10 003F8A10*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBC14 003F8A14*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBC18 003F8A18*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBC1C 003F8A1C*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FBC20 003F8A20*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBC24 003F8A24*/ PPC::Runtime::ASM::bctrl();
/*803FBC28 003F8A28*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBC2C 003F8A2C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBC30 003F8A30*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBC34 003F8A34*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBC38 003F8A38*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FBC3C 003F8A3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBC40 003F8A40*/ PPC::Runtime::ASM::bctrl();
/*803FBC44 003F8A44*/ PPC::Runtime::ASM::b(.L_803FBC60);
/*803FBC48 003F8A48*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBC4C 003F8A4C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBC50 003F8A50*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBC54 003F8A54*/ PPC::Runtime::ASM::li(context->r5, 0xc);
/*803FBC58 003F8A58*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBC5C 003F8A5C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FBC60, 0x803FBC60) //this is a jump label
/*803FBC60 003F8A60*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r26));
/*803FBC64 003F8A64*/ PPC::Runtime::ASM::rlwinm(context->r25, context->r28, 0, 22, 22);
/*803FBC68 003F8A68*/ PPC::Runtime::ASM::b(.L_803FBDB4);
RUNTIME_PPC_JUMP_LABEL(.L_803FBC6C, 0x803FBC6C) //this is a jump label
/*803FBC6C 003F8A6C*/ PPC::Runtime::ASM::cmpwi(context->r25, 0x0);
/*803FBC70 003F8A70*/ PPC::Runtime::ASM::beq(.L_803FBDB0);
/*803FBC74 003F8A74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r26));
/*803FBC78 003F8A78*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FBC7C 003F8A7C*/ PPC::Runtime::ASM::beq(.L_803FBDB0);
/*803FBC80 003F8A80*/ PPC::Runtime::ASM::cmplwi(context->r30, 0xb);
/*803FBC84 003F8A84*/ PPC::Runtime::ASM::bgt(.L_803FBDB0);
/*803FBC88 003F8A88*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502C64 @ Get_MemoryOffset_HighBit);
/*803FBC8C 003F8A8C*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*803FBC90 003F8A90*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502C64 @ Get_MemoryOffset_LowBit);
/*803FBC94 003F8A94*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FBC98 003F8A98*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FBC9C 003F8A9C*/ PPC::Runtime::ASM::bctr();
/*803FBCA0 003F8AA0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBCA4 003F8AA4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBCA8 003F8AA8*/ PPC::Runtime::ASM::bctrl();
/*803FBCAC 003F8AAC*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBCB0 003F8AB0*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBCB4 003F8AB4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBCB8 003F8AB8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBCBC 003F8ABC*/ PPC::Runtime::ASM::bctrl();
/*803FBCC0 003F8AC0*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBCC4 003F8AC4*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBCC8 003F8AC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBCCC 003F8ACC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBCD0 003F8AD0*/ PPC::Runtime::ASM::bctrl();
/*803FBCD4 003F8AD4*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBCD8 003F8AD8*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBCDC 003F8ADC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBCE0 003F8AE0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBCE4 003F8AE4*/ PPC::Runtime::ASM::bctrl();
/*803FBCE8 003F8AE8*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBCEC 003F8AEC*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBCF0 003F8AF0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBCF4 003F8AF4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBCF8 003F8AF8*/ PPC::Runtime::ASM::bctrl();
/*803FBCFC 003F8AFC*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD00 003F8B00*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD04 003F8B04*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD08 003F8B08*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBD0C 003F8B0C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD10 003F8B10*/ PPC::Runtime::ASM::bctrl();
/*803FBD14 003F8B14*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD18 003F8B18*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD1C 003F8B1C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD20 003F8B20*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBD24 003F8B24*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD28 003F8B28*/ PPC::Runtime::ASM::bctrl();
/*803FBD2C 003F8B2C*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD30 003F8B30*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD34 003F8B34*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD38 003F8B38*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBD3C 003F8B3C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD40 003F8B40*/ PPC::Runtime::ASM::bctrl();
/*803FBD44 003F8B44*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD48 003F8B48*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD4C 003F8B4C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD50 003F8B50*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBD54 003F8B54*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD58 003F8B58*/ PPC::Runtime::ASM::bctrl();
/*803FBD5C 003F8B5C*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD60 003F8B60*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD64 003F8B64*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD68 003F8B68*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBD6C 003F8B6C*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBD70 003F8B70*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD74 003F8B74*/ PPC::Runtime::ASM::bctrl();
/*803FBD78 003F8B78*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD7C 003F8B7C*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD80 003F8B80*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBD84 003F8B84*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBD88 003F8B88*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBD8C 003F8B8C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBD90 003F8B90*/ PPC::Runtime::ASM::bctrl();
/*803FBD94 003F8B94*/ PPC::Runtime::ASM::b(.L_803FBDB0);
/*803FBD98 003F8B98*/ PPC::Runtime::ASM::mr(context->r12, context->r29);
/*803FBD9C 003F8B9C*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803FBDA0 003F8BA0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*803FBDA4 003F8BA4*/ PPC::Runtime::ASM::li(context->r5, 0xa);
/*803FBDA8 003F8BA8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FBDAC 003F8BAC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FBDB0, 0x803FBDB0) //this is a jump label
/*803FBDB0 003F8BB0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_803FBDB4, 0x803FBDB4) //this is a jump label
/*803FBDB4 003F8BB4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*803FBDB8 003F8BB8*/ PPC::Runtime::ASM::bne(.L_803FBC6C);
RUNTIME_PPC_JUMP_LABEL(.L_803FBDBC, 0x803FBDBC) //this is a jump label
/*803FBDBC 003F8BBC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803FBDC0 003F8BC0*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*803FBDC4 003F8BC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FBDC8 003F8BC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FBDCC 003F8BCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803FBDD0 003F8BD0*/ PPC::Runtime::ASM::blr();
}