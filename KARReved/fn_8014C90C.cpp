//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801311EC.hpp"
#include "fn_80059520.hpp"



void fn_8014C90C(PPC::Runtime::GCContext* context)
{
/*8014C90C 0014970C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8014C910 00149710*/ PPC::Runtime::ASM::mflr(context->r0);
/*8014C914 00149714*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C918 00149718*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C91C 0014971C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8014C920 00149720*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8014C924 00149724*/ PPC::Runtime::ASM::bl(fn_801311EC);
/*8014C928 00149728*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1197 @ Get_MemoryOffset_HighBit);
/*8014C92C 0014972C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8014C930 00149730*/ PPC::Runtime::ASM::addi(context->r5, context->r4, MemoryOffset_1197 @ Get_MemoryOffset_LowBit);
/*8014C934 00149734*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8014C938 00149738*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x3f8);
/*8014C93C 0014973C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*8014C940 00149740*/ PPC::Runtime::ASM::bl(fn_80059520);
/*8014C944 00149744*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8014C948 00149748*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8014C94C 0014974C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8014C950 00149750*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8014C954 00149754*/ PPC::Runtime::ASM::blr();
}