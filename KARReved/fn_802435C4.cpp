//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802435C4(PPC::Runtime::GCContext* context)
{
/*802435C4 002403C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*802435C8 002403C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802435CC 002403CC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802435D0 002403D0*/ PPC::Runtime::ASM::fabs(context->f2, context->f0);
/*802435D4 002403D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802435D8 002403D8*/ PPC::Runtime::ASM::fabs(context->f1, context->f1);
/*802435DC 002403DC*/ PPC::Runtime::ASM::fabs(context->f0, context->f0);
/*802435E0 002403E0*/ PPC::Runtime::ASM::frsp(context->f2, context->f2);
/*802435E4 002403E4*/ PPC::Runtime::ASM::frsp(context->f1, context->f1);
/*802435E8 002403E8*/ PPC::Runtime::ASM::frsp(context->f0, context->f0);
/*802435EC 002403EC*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*802435F0 002403F0*/ PPC::Runtime::ASM::ble(.L_8024381C);
/*802435F4 002403F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*802435F8 002403F8*/ PPC::Runtime::ASM::ble(.L_8024370C);
/*802435FC 002403FC*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243600 00240400*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*80243604 00240404*/ PPC::Runtime::ASM::ble(.L_80243700);
/*80243608 00240408*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*8024360C 0024040C*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243610 00240410*/ PPC::Runtime::ASM::ble(.L_802436C0);
/*80243614 00240414*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243618 00240418*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*8024361C 0024041C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243620 00240420*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*80243624 00240424*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243628 00240428*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8024362C 0024042C*/ PPC::Runtime::ASM::ble(.L_802436C0);
RUNTIME_PPC_JUMP_LABEL(.L_80243630, 0x80243630) //this is a jump label
/*80243630 00240430*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243634 00240434*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243638 00240438*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*8024363C 0024043C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80243640 00240440*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*80243644 00240444*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243648 00240448*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r9));
/*8024364C 0024044C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*80243650 00240450*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r9));
/*80243654 00240454*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243658 00240458*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r9));
/*8024365C 0024045C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80243660 00240460*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r9));
/*80243664 00240464*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80243668 00240468*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r9));
/*8024366C 0024046C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80243670 00240470*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r9));
/*80243674 00240474*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*80243678 00240478*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r9));
/*8024367C 0024047C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*80243680 00240480*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r9));
/*80243684 00240484*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*80243688 00240488*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r9));
/*8024368C 0024048C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*80243690 00240490*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r9));
/*80243694 00240494*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*80243698 00240498*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r9));
/*8024369C 0024049C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r7));
/*802436A0 002404A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r9));
/*802436A4 002404A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*802436A8 002404A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r9));
/*802436AC 002404AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r7));
/*802436B0 002404B0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*802436B4 002404B4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r9));
/*802436B8 002404B8*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x40);
/*802436BC 002404BC*/ PPC::Runtime::ASM::bdnz(.L_80243630);
RUNTIME_PPC_JUMP_LABEL(.L_802436C0, 0x802436C0) //this is a jump label
/*802436C0 002404C0*/ PPC::Runtime::ASM::mulli(context->r7, context->r8, 0xc);
/*802436C4 002404C4*/ PPC::Runtime::ASM::slwi(context->r4, context->r8, 3);
/*802436C8 002404C8*/ PPC::Runtime::ASM::addi(context->r9, context->r1, 0x8);
/*802436CC 002404CC*/ PPC::Runtime::ASM::subf(context->r0, context->r8, context->r6);
/*802436D0 002404D0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*802436D4 002404D4*/ PPC::Runtime::ASM::add(context->r9, context->r9, context->r4);
/*802436D8 002404D8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802436DC 002404DC*/ PPC::Runtime::ASM::cmpw(context->r8, context->r6);
/*802436E0 002404E0*/ PPC::Runtime::ASM::bge(.L_80243700);
RUNTIME_PPC_JUMP_LABEL(.L_802436E4, 0x802436E4) //this is a jump label
/*802436E4 002404E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802436E8 002404E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r9));
/*802436EC 002404EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802436F0 002404F0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*802436F4 002404F4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r9));
/*802436F8 002404F8*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*802436FC 002404FC*/ PPC::Runtime::ASM::bdnz(.L_802436E4);
RUNTIME_PPC_JUMP_LABEL(.L_80243700, 0x80243700) //this is a jump label
/*80243700 00240500*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80243704 00240504*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80243708 00240508*/ PPC::Runtime::ASM::b(.L_80243A40);
RUNTIME_PPC_JUMP_LABEL(.L_8024370C, 0x8024370C) //this is a jump label
/*8024370C 0024050C*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243710 00240510*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80243714 00240514*/ PPC::Runtime::ASM::ble(.L_80243810);
/*80243718 00240518*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*8024371C 0024051C*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243720 00240520*/ PPC::Runtime::ASM::ble(.L_802437D0);
/*80243724 00240524*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243728 00240528*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*8024372C 0024052C*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243730 00240530*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243734 00240534*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243738 00240538*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*8024373C 0024053C*/ PPC::Runtime::ASM::ble(.L_802437D0);
RUNTIME_PPC_JUMP_LABEL(.L_80243740, 0x80243740) //this is a jump label
/*80243740 00240540*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*80243744 00240544*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243748 00240548*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*8024374C 0024054C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243750 00240550*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243754 00240554*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243758 00240558*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*8024375C 0024055C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243760 00240560*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*80243764 00240564*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243768 00240568*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*8024376C 0024056C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243770 00240570*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*80243774 00240574*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80243778 00240578*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*8024377C 0024057C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*80243780 00240580*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*80243784 00240584*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*80243788 00240588*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*8024378C 0024058C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*80243790 00240590*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*80243794 00240594*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*80243798 00240598*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*8024379C 0024059C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*802437A0 002405A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*802437A4 002405A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*802437A8 002405A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*802437AC 002405AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*802437B0 002405B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*802437B4 002405B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*802437B8 002405B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*802437BC 002405BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*802437C0 002405C0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*802437C4 002405C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802437C8 002405C8*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*802437CC 002405CC*/ PPC::Runtime::ASM::bdnz(.L_80243740);
RUNTIME_PPC_JUMP_LABEL(.L_802437D0, 0x802437D0) //this is a jump label
/*802437D0 002405D0*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*802437D4 002405D4*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*802437D8 002405D8*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*802437DC 002405DC*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*802437E0 002405E0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*802437E4 002405E4*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*802437E8 002405E8*/ PPC::Runtime::ASM::mtctr(context->r0);
/*802437EC 002405EC*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*802437F0 002405F0*/ PPC::Runtime::ASM::bge(.L_80243810);
RUNTIME_PPC_JUMP_LABEL(.L_802437F4, 0x802437F4) //this is a jump label
/*802437F4 002405F4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802437F8 002405F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*802437FC 002405FC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80243800 00240600*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243804 00240604*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243808 00240608*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*8024380C 0024060C*/ PPC::Runtime::ASM::bdnz(.L_802437F4);
RUNTIME_PPC_JUMP_LABEL(.L_80243810, 0x80243810) //this is a jump label
/*80243810 00240610*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243814 00240614*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80243818 00240618*/ PPC::Runtime::ASM::b(.L_80243A40);
RUNTIME_PPC_JUMP_LABEL(.L_8024381C, 0x8024381C) //this is a jump label
/*8024381C 0024061C*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80243820 00240620*/ PPC::Runtime::ASM::ble(.L_80243934);
/*80243824 00240624*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243828 00240628*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8024382C 0024062C*/ PPC::Runtime::ASM::ble(.L_80243928);
/*80243830 00240630*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243834 00240634*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243838 00240638*/ PPC::Runtime::ASM::ble(.L_802438E8);
/*8024383C 0024063C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243840 00240640*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243844 00240644*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243848 00240648*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*8024384C 0024064C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243850 00240650*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243854 00240654*/ PPC::Runtime::ASM::ble(.L_802438E8);
RUNTIME_PPC_JUMP_LABEL(.L_80243858, 0x80243858) //this is a jump label
/*80243858 00240658*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8024385C 0024065C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243860 00240660*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243864 00240664*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*80243868 00240668*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8024386C 0024066C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243870 00240670*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80243874 00240674*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r7));
/*80243878 00240678*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*8024387C 0024067C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243880 00240680*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80243884 00240684*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r7));
/*80243888 00240688*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*8024388C 0024068C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*80243890 00240690*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*80243894 00240694*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r7));
/*80243898 00240698*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*8024389C 0024069C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*802438A0 002406A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*802438A4 002406A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r7));
/*802438A8 002406A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*802438AC 002406AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*802438B0 002406B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*802438B4 002406B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r7));
/*802438B8 002406B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*802438BC 002406BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*802438C0 002406C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*802438C4 002406C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r7));
/*802438C8 002406C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*802438CC 002406CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*802438D0 002406D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*802438D4 002406D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r7));
/*802438D8 002406D8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*802438DC 002406DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802438E0 002406E0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*802438E4 002406E4*/ PPC::Runtime::ASM::bdnz(.L_80243858);
RUNTIME_PPC_JUMP_LABEL(.L_802438E8, 0x802438E8) //this is a jump label
/*802438E8 002406E8*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*802438EC 002406EC*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*802438F0 002406F0*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*802438F4 002406F4*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*802438F8 002406F8*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*802438FC 002406FC*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*80243900 00240700*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243904 00240704*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*80243908 00240708*/ PPC::Runtime::ASM::bge(.L_80243928);
RUNTIME_PPC_JUMP_LABEL(.L_8024390C, 0x8024390C) //this is a jump label
/*8024390C 0024070C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80243910 00240710*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243914 00240714*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80243918 00240718*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*8024391C 0024071C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243920 00240720*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243924 00240724*/ PPC::Runtime::ASM::bdnz(.L_8024390C);
RUNTIME_PPC_JUMP_LABEL(.L_80243928, 0x80243928) //this is a jump label
/*80243928 00240728*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8024392C 0024072C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*80243930 00240730*/ PPC::Runtime::ASM::b(.L_80243A40);
RUNTIME_PPC_JUMP_LABEL(.L_80243934, 0x80243934) //this is a jump label
/*80243934 00240734*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243938 00240738*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*8024393C 0024073C*/ PPC::Runtime::ASM::ble(.L_80243A38);
/*80243940 00240740*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x8);
/*80243944 00240744*/ PPC::Runtime::ASM::subi(context->r4, context->r6, 0x8);
/*80243948 00240748*/ PPC::Runtime::ASM::ble(.L_802439F8);
/*8024394C 0024074C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x7);
/*80243950 00240750*/ PPC::Runtime::ASM::mr(context->r7, context->r3);
/*80243954 00240754*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 3);
/*80243958 00240758*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*8024395C 0024075C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243960 00240760*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80243964 00240764*/ PPC::Runtime::ASM::ble(.L_802439F8);
RUNTIME_PPC_JUMP_LABEL(.L_80243968, 0x80243968) //this is a jump label
/*80243968 00240768*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8024396C 0024076C*/ PPC::Runtime::ASM::addi(context->r9, context->r9, 0x8);
/*80243970 00240770*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243974 00240774*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*80243978 00240778*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*8024397C 0024077C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r7));
/*80243980 00240780*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r8));
/*80243984 00240784*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r7));
/*80243988 00240788*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*8024398C 0024078C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r7));
/*80243990 00240790*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80243994 00240794*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r7));
/*80243998 00240798*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r8));
/*8024399C 0024079C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r7));
/*802439A0 002407A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r8));
/*802439A4 002407A4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r7));
/*802439A8 002407A8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r8));
/*802439AC 002407AC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r7));
/*802439B0 002407B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r8));
/*802439B4 002407B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r7));
/*802439B8 002407B8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r8));
/*802439BC 002407BC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r7));
/*802439C0 002407C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r8));
/*802439C4 002407C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r7));
/*802439C8 002407C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r8));
/*802439CC 002407CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r7));
/*802439D0 002407D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*802439D4 002407D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r7));
/*802439D8 002407D8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r8));
/*802439DC 002407DC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r7));
/*802439E0 002407E0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*802439E4 002407E4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r7));
/*802439E8 002407E8*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x60);
/*802439EC 002407EC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*802439F0 002407F0*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x40);
/*802439F4 002407F4*/ PPC::Runtime::ASM::bdnz(.L_80243968);
RUNTIME_PPC_JUMP_LABEL(.L_802439F8, 0x802439F8) //this is a jump label
/*802439F8 002407F8*/ PPC::Runtime::ASM::mulli(context->r7, context->r9, 0xc);
/*802439FC 002407FC*/ PPC::Runtime::ASM::slwi(context->r4, context->r9, 3);
/*80243A00 00240800*/ PPC::Runtime::ASM::addi(context->r8, context->r1, 0x8);
/*80243A04 00240804*/ PPC::Runtime::ASM::subf(context->r0, context->r9, context->r6);
/*80243A08 00240808*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r7);
/*80243A0C 0024080C*/ PPC::Runtime::ASM::add(context->r8, context->r8, context->r4);
/*80243A10 00240810*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80243A14 00240814*/ PPC::Runtime::ASM::cmpw(context->r9, context->r6);
/*80243A18 00240818*/ PPC::Runtime::ASM::bge(.L_80243A38);
RUNTIME_PPC_JUMP_LABEL(.L_80243A1C, 0x80243A1C) //this is a jump label
/*80243A1C 0024081C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80243A20 00240820*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*80243A24 00240824*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80243A28 00240828*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0xc);
/*80243A2C 0024082C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80243A30 00240830*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x8);
/*80243A34 00240834*/ PPC::Runtime::ASM::bdnz(.L_80243A1C);
RUNTIME_PPC_JUMP_LABEL(.L_80243A38, 0x80243A38) //this is a jump label
/*80243A38 00240838*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243A3C 0024083C*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_80243A40, 0x80243A40) //this is a jump label
/*80243A40 00240840*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*80243A44 00240844*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E2B50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80243A48 00240848*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80243A4C 0024084C*/ PPC::Runtime::ASM::mtctr(context->r6);
/*80243A50 00240850*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80243A54 00240854*/ PPC::Runtime::ASM::ble(.L_80243AF4);
RUNTIME_PPC_JUMP_LABEL(.L_80243A58, 0x80243A58) //this is a jump label
/*80243A58 00240858*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80243A5C 0024085C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*80243A60 00240860*/ PPC::Runtime::ASM::blt(.L_80243A68);
/*80243A64 00240864*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80243A68, 0x80243A68) //this is a jump label
/*80243A68 00240868*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80243A6C 0024086C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80243A70 00240870*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80243A74 00240874*/ PPC::Runtime::ASM::lfs(context->f9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80243A78 00240878*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80243A7C 0024087C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x2);
/*80243A80 00240880*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80243A84 00240884*/ PPC::Runtime::ASM::cmpw(context->r0, context->r6);
/*80243A88 00240888*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f9);
/*80243A8C 0024088C*/ PPC::Runtime::ASM::lfs(context->f10, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80243A90 00240890*/ PPC::Runtime::ASM::fsubs(context->f7, context->f2, context->f10);
/*80243A94 00240894*/ PPC::Runtime::ASM::fneg(context->f8, context->f1);
/*80243A98 00240898*/ PPC::Runtime::ASM::blt(.L_80243AA0);
/*80243A9C 0024089C*/ PPC::Runtime::ASM::subf(context->r0, context->r6, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80243AA0, 0x80243AA0) //this is a jump label
/*80243AA0 002408A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 3);
/*80243AA4 002408A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80243AA8 002408A8*/ PPC::Runtime::ASM::add(context->r4, context->r4, context->r0);
/*80243AAC 002408AC*/ PPC::Runtime::ASM::fsubs(context->f1, context->f6, context->f9);
/*80243AB0 002408B0*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80243AB4 002408B4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f5, context->f10);
/*80243AB8 002408B8*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80243ABC 002408BC*/ PPC::Runtime::ASM::fsubs(context->f3, context->f3, context->f9);
/*80243AC0 002408C0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f7, context->f1);
/*80243AC4 002408C4*/ PPC::Runtime::ASM::fsubs(context->f4, context->f4, context->f10);
/*80243AC8 002408C8*/ PPC::Runtime::ASM::fmuls(context->f3, context->f7, context->f3);
/*80243ACC 002408CC*/ PPC::Runtime::ASM::fmadds(context->f1, context->f8, context->f2, context->f1);
/*80243AD0 002408D0*/ PPC::Runtime::ASM::fmadds(context->f2, context->f8, context->f4, context->f3);
/*80243AD4 002408D4*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80243AD8 002408D8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*80243ADC 002408DC*/ PPC::Runtime::ASM::bge(.L_80243AE8);
/*80243AE0 002408E0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80243AE4 002408E4*/ PPC::Runtime::ASM::b(.L_80243AF8);
RUNTIME_PPC_JUMP_LABEL(.L_80243AE8, 0x80243AE8) //this is a jump label
/*80243AE8 002408E8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x8);
/*80243AEC 002408EC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*80243AF0 002408F0*/ PPC::Runtime::ASM::bdnz(.L_80243A58);
RUNTIME_PPC_JUMP_LABEL(.L_80243AF4, 0x80243AF4) //this is a jump label
/*80243AF4 002408F4*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80243AF8, 0x80243AF8) //this is a jump label
/*80243AF8 002408F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80243AFC 002408FC*/ PPC::Runtime::ASM::blr();
}