//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_Panic.hpp"



void fn_HSD_TexMapID2PTTexMtx(PPC::Runtime::GCContext* context)
{
/*803F5698 003F2498*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F569C 003F249C*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F56A0 003F24A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x7);
/*803F56A4 003F24A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F56A8 003F24A8*/ PPC::Runtime::ASM::bgt(.L_803F5704);
/*803F56AC 003F24AC*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80501F48 @ Get_MemoryOffset_HighBit);
/*803F56B0 003F24B0*/ PPC::Runtime::ASM::slwi(context->r0, context->r3, 2);
/*803F56B4 003F24B4*/ PPC::Runtime::ASM::addi(context->r3, context->r4, jumptable_80501F48 @ Get_MemoryOffset_LowBit);
/*803F56B8 003F24B8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*803F56BC 003F24BC*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803F56C0 003F24C0*/ PPC::Runtime::ASM::bctr();
/*803F56C4 003F24C4*/ PPC::Runtime::ASM::li(context->r3, 0x40);
/*803F56C8 003F24C8*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56CC 003F24CC*/ PPC::Runtime::ASM::li(context->r3, 0x43);
/*803F56D0 003F24D0*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56D4 003F24D4*/ PPC::Runtime::ASM::li(context->r3, 0x46);
/*803F56D8 003F24D8*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56DC 003F24DC*/ PPC::Runtime::ASM::li(context->r3, 0x49);
/*803F56E0 003F24E0*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56E4 003F24E4*/ PPC::Runtime::ASM::li(context->r3, 0x4c);
/*803F56E8 003F24E8*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56EC 003F24EC*/ PPC::Runtime::ASM::li(context->r3, 0x4f);
/*803F56F0 003F24F0*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56F4 003F24F4*/ PPC::Runtime::ASM::li(context->r3, 0x52);
/*803F56F8 003F24F8*/ PPC::Runtime::ASM::b(.L_803F571C);
/*803F56FC 003F24FC*/ PPC::Runtime::ASM::li(context->r3, 0x55);
/*803F5700 003F2500*/ PPC::Runtime::ASM::b(.L_803F571C);
RUNTIME_PPC_JUMP_LABEL(.L_803F5704, 0x803F5704) //this is a jump label
/*803F5704 003F2504*/ PPC::Runtime::ASM::lis(context->r4, lbl_80501F30 @ Get_MemoryOffset_HighBit);
/*803F5708 003F2508*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F570C 003F250C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_80501F30 @ Get_MemoryOffset_LowBit);
/*803F5710 003F2510*/ PPC::Runtime::ASM::li(context->r4, 0x297);
/*803F5714 003F2514*/ PPC::Runtime::ASM::bl(fn_HSD_Panic);
/*803F5718 003F2518*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803F571C, 0x803F571C) //this is a jump label
/*803F571C 003F251C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F5720 003F2520*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F5724 003F2524*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F5728 003F2528*/ PPC::Runtime::ASM::blr();
}