//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80194E60.hpp"
#include "fn_8022D024.hpp"
#include "fn_8022D03C.hpp"



void fn_80191294(PPC::Runtime::GCContext* context)
{
/*80191294 0018E094*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191298 0018E098*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019129C 0018E09C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801912A0 0018E0A0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801912A4 0018E0A4*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*801912A8 0018E0A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801912AC 0018E0AC*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801912B0 0018E0B0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801912B4 0018E0B4*/ PPC::Runtime::ASM::bl(fn_80194E60);
/*801912B8 0018E0B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801912BC 0018E0BC*/ PPC::Runtime::ASM::bl(fn_8022D024);
/*801912C0 0018E0C0*/ PPC::Runtime::ASM::mr(context->r0, context->r3);
/*801912C4 0018E0C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801912C8 0018E0C8*/ PPC::Runtime::ASM::add(context->r4, context->r31, context->r0);
/*801912CC 0018E0CC*/ PPC::Runtime::ASM::bl(fn_8022D03C);
/*801912D0 0018E0D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801912D4 0018E0D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801912D8 0018E0D8*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801912DC 0018E0DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801912E0 0018E0E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801912E4 0018E0E4*/ PPC::Runtime::ASM::blr();
}