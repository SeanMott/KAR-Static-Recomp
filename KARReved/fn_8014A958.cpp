//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_8014A958(PPC::Runtime::GCContext* context)
{
/*8014A958 00147758*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014A95C 0014775C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014A960 00147760*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A964 00147764*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A968 00147768*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014A96C 0014776C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014A970 00147770*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8014A974 00147774*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*8014A978 00147778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014A97C 0014777C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014A980 00147780*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014A984 00147784*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014A988 00147788*/ PPC::Runtime::ASM::blr();
}