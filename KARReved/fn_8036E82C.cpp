//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8036FA8C.hpp"
#include "fn_80370E24.hpp"



void fn_8036E82C(PPC::Runtime::GCContext* context)
{
/*8036E82C 0036B62C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8036E830 0036B630*/ PPC::Runtime::ASM::mflr(context->r0);
/*8036E834 0036B634*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036E838 0036B638*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036E83C 0036B63C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036E840 0036B640*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036E844 0036B644*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*8036E848 0036B648*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036E84C 0036B64C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8036E850 0036B650*/ PPC::Runtime::ASM::addi(context->r30, context->r28, 0x10);
/*8036E854 0036B654*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8036E858 0036B658*/ PPC::Runtime::ASM::b(.L_8036E86C);
RUNTIME_PPC_JUMP_LABEL(.L_8036E85C, 0x8036E85C) //this is a jump label
/*8036E85C 0036B65C*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*8036E860 0036B660*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x8);
/*8036E864 0036B664*/ PPC::Runtime::ASM::bl(fn_8036FA8C);
/*8036E868 0036B668*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8036E86C, 0x8036E86C) //this is a jump label
/*8036E86C 0036B66C*/ PPC::Runtime::ASM::cmplw(context->r31, context->r30);
/*8036E870 0036B670*/ PPC::Runtime::ASM::bne(.L_8036E85C);
/*8036E874 0036B674*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F07EC @ Get_MemoryOffset_HighBit);
/*8036E878 0036B678*/ PPC::Runtime::ASM::addi(context->r3, context->r28, 0x4);
/*8036E87C 0036B67C*/ PPC::Runtime::ASM::addi(context->r7, context->r4, lbl_804F07EC @ Get_MemoryOffset_LowBit);
/*8036E880 0036B680*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*8036E884 0036B684*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r7));
/*8036E888 0036B688*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r7));
/*8036E88C 0036B68C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r7));
/*8036E890 0036B690*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8036E894 0036B694*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8036E898 0036B698*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8036E89C 0036B69C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8036E8A0 0036B6A0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8036E8A4 0036B6A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8036E8A8 0036B6A8*/ PPC::Runtime::ASM::bl(fn_80370E24);
/*8036E8AC 0036B6AC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*8036E8B0 0036B6B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8036E8B4 0036B6B4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*8036E8B8 0036B6B8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8036E8BC 0036B6BC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*8036E8C0 0036B6C0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036E8C4 0036B6C4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8036E8C8 0036B6C8*/ PPC::Runtime::ASM::blr();
}