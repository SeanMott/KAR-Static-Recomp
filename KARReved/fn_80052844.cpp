//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80052844(PPC::Runtime::GCContext* context)
{
/*80052844 0004F644*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80052848 0004F648*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8005284C 0004F64C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80052850 0004F650*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80052854 0004F654*/ PPC::Runtime::ASM::beq(.L_80052874);
/*80052858 0004F658*/ PPC::Runtime::ASM::lis(context->r5, lbl_80537470 @ Get_MemoryOffset_HighBit);
/*8005285C 0004F65C*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*80052860 0004F660*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80537470 @ Get_MemoryOffset_LowBit);
/*80052864 0004F664*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*80052868 0004F668*/ PPC::Runtime::ASM::stwx(context->r6, context->r5, context->r0);
/*8005286C 0004F66C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80052870 0004F670*/ PPC::Runtime::ASM::b(.L_800528CC);
RUNTIME_PPC_JUMP_LABEL(.L_80052874, 0x80052874) //this is a jump label
/*80052874 0004F674*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80052878 0004F678*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8005287C 0004F67C*/ PPC::Runtime::ASM::beq(.L_800528D8);
/*80052880 0004F680*/ PPC::Runtime::ASM::b(.L_800528CC);
RUNTIME_PPC_JUMP_LABEL(.L_80052884, 0x80052884) //this is a jump label
/*80052884 0004F684*/ PPC::Runtime::ASM::cmpwi(context->r7, 0x0);
/*80052888 0004F688*/ PPC::Runtime::ASM::bne(.L_80052894);
/*8005288C 0004F68C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80052890 0004F690*/ PPC::Runtime::ASM::b(.L_800528CC);
RUNTIME_PPC_JUMP_LABEL(.L_80052894, 0x80052894) //this is a jump label
/*80052894 0004F694*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x4, context->r6));
/*80052898 0004F698*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*8005289C 0004F69C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*800528A0 0004F6A0*/ PPC::Runtime::ASM::beq(.L_800528C0);
/*800528A4 0004F6A4*/ PPC::Runtime::ASM::lis(context->r5, lbl_80537470 @ Get_MemoryOffset_HighBit);
/*800528A8 0004F6A8*/ PPC::Runtime::ASM::subi(context->r7, context->r7, 0x1);
/*800528AC 0004F6AC*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*800528B0 0004F6B0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, lbl_80537470 @ Get_MemoryOffset_LowBit);
/*800528B4 0004F6B4*/ PPC::Runtime::ASM::lwzx(context->r5, context->r5, context->r0);
/*800528B8 0004F6B8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*800528BC 0004F6BC*/ PPC::Runtime::ASM::b(.L_800528CC);
RUNTIME_PPC_JUMP_LABEL(.L_800528C0, 0x800528C0) //this is a jump label
/*800528C0 0004F6C0*/ PPC::Runtime::ASM::subi(context->r6, context->r6, 0x4);
/*800528C4 0004F6C4*/ PPC::Runtime::ASM::subi(context->r7, context->r7, 0x1);
/*800528C8 0004F6C8*/ PPC::Runtime::ASM::b(.L_80052884);
RUNTIME_PPC_JUMP_LABEL(.L_800528CC, 0x800528CC) //this is a jump label
/*800528CC 0004F6CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*800528D0 0004F6D0*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*800528D4 0004F6D4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_800528D8, 0x800528D8) //this is a jump label
/*800528D8 0004F6D8*/ PPC::Runtime::ASM::lis(context->r5, lbl_80537470 @ Get_MemoryOffset_HighBit);
/*800528DC 0004F6DC*/ PPC::Runtime::ASM::slwi(context->r6, context->r7, 2);
/*800528E0 0004F6E0*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_80537470 @ Get_MemoryOffset_LowBit);
/*800528E4 0004F6E4*/ PPC::Runtime::ASM::add(context->r6, context->r0, context->r6);
/*800528E8 0004F6E8*/ PPC::Runtime::ASM::b(.L_80052884);
}