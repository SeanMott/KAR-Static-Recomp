//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C460C.hpp"
#include "fn_801C2268.hpp"
#include "fn_801C297C.hpp"
#include "fn_801C2020.hpp"



void fn_801C19C8(PPC::Runtime::GCContext* context)
{
/*801C19C8 001BE7C8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C19CC 001BE7CC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C19D0 001BE7D0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801C19D4 001BE7D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C19D8 001BE7D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C19DC 001BE7DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C19E0 001BE7E0*/ PPC::Runtime::ASM::bl(fn_801C460C);
/*801C19E4 001BE7E4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C19E8 001BE7E8*/ PPC::Runtime::ASM::bl(fn_801C2268);
/*801C19EC 001BE7EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C19F0 001BE7F0*/ PPC::Runtime::ASM::bne(.L_801C1A0C);
/*801C19F4 001BE7F4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C19F8 001BE7F8*/ PPC::Runtime::ASM::bl(fn_801C297C);
/*801C19FC 001BE7FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C1A00 001BE800*/ PPC::Runtime::ASM::bne(.L_801C1A0C);
/*801C1A04 001BE804*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C1A08 001BE808*/ PPC::Runtime::ASM::bl(fn_801C2020);
RUNTIME_PPC_JUMP_LABEL(.L_801C1A0C, 0x801C1A0C) //this is a jump label
/*801C1A0C 001BE80C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1A10 001BE810*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1A14 001BE814*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1A18 001BE818*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1A1C 001BE81C*/ PPC::Runtime::ASM::blr();
}