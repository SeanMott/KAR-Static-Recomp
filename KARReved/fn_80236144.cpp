//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80059520.hpp"
#include "fn_8023515C.hpp"



void fn_80236144(PPC::Runtime::GCContext* context)
{
/*80236144 00232F44*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80236148 00232F48*/ PPC::Runtime::ASM::mflr(context->r0);
/*8023614C 00232F4C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80236150 00232F50*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236154 00232F54*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80236158 00232F58*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8023615C 00232F5C*/ PPC::Runtime::ASM::beq(.L_80236188);
/*80236160 00232F60*/ PPC::Runtime::ASM::lis(context->r5, String_ "efModelDat" Get_MemoryOffset_HighBit);
/*80236164 00232F64*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80236168 00232F68*/ PPC::Runtime::ASM::addi(context->r5, context->r5, String_ "efModelDat" Get_MemoryOffset_LowBit);
/*8023616C 00232F6C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80236170 00232F70*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*80236174 00232F74*/ PPC::Runtime::ASM::bl(fn_80059520);
/*80236178 00232F78*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8023617C 00232F7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80236180 00232F80*/ PPC::Runtime::ASM::bl(fn_8023515C);
/*80236184 00232F84*/ PPC::Runtime::ASM::b(.L_8023618C);
RUNTIME_PPC_JUMP_LABEL(.L_80236188, 0x80236188) //this is a jump label
/*80236188 00232F88*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8023618C, 0x8023618C) //this is a jump label
/*8023618C 00232F8C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80236190 00232F90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80236194 00232F94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80236198 00232F98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8023619C 00232F9C*/ PPC::Runtime::ASM::blr();
}