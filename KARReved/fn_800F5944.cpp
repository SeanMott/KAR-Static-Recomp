//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F5AC4.hpp"
#include "fn_800F9030.hpp"



void fn_800F5944(PPC::Runtime::GCContext* context)
{
/*800F5944 000F2744*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F5948 000F2748*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F594C 000F274C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5950 000F2750*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F5954 000F2754*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F5958 000F2758*/ PPC::Runtime::ASM::bl(fn_800F5AC4);
/*800F595C 000F275C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F5960 000F2760*/ PPC::Runtime::ASM::bl(fn_800F9030);
/*800F5964 000F2764*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5968 000F2768*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F596C 000F276C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F5970 000F2770*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F5974 000F2774*/ PPC::Runtime::ASM::blr();
}