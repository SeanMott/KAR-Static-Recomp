//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007B44C.hpp"



void fn_80281D50(PPC::Runtime::GCContext* context)
{
/*80281D50 0027EB50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80281D54 0027EB54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80281D58 0027EB58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281D5C 0027EB5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281D60 0027EB60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281D64 0027EB64*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80281D68 0027EB68*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80281D6C 0027EB6C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80281D70 0027EB70*/ PPC::Runtime::ASM::beq(.L_80281DBC);
/*80281D74 0027EB74*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80281D78 0027EB78*/ PPC::Runtime::ASM::mr(context->r31, context->r0);
/*80281D7C 0027EB7C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80281D80 0027EB80*/ PPC::Runtime::ASM::bne(.L_80281D94);
/*80281D84 0027EB84*/ PPC::Runtime::ASM::li(context->r3, lbl_805D7478 @ Get_MemoryOffset_SDA21);
/*80281D88 0027EB88*/ PPC::Runtime::ASM::li(context->r4, 0x3e4);
/*80281D8C 0027EB8C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D7480 @ Get_MemoryOffset_SDA21);
/*80281D90 0027EB90*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80281D94, 0x80281D94) //this is a jump label
/*80281D94 0027EB94*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*80281D98 0027EB98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80281D9C 0027EB9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r30));
/*80281DA0 0027EBA0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80281DA4 0027EBA4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E32A4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80281DA8 0027EBA8*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80281DAC 0027EBAC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80281DB0 0027EBB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r30));
/*80281DB4 0027EBB4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80281DB8 0027EBB8*/ PPC::Runtime::ASM::bl(fn_8007B44C);
RUNTIME_PPC_JUMP_LABEL(.L_80281DBC, 0x80281DBC) //this is a jump label
/*80281DBC 0027EBBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80281DC0 0027EBC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80281DC4 0027EBC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80281DC8 0027EBC8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80281DCC 0027EBCC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80281DD0 0027EBD0*/ PPC::Runtime::ASM::blr();
}