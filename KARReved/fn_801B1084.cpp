//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_ability_Sleep_end.hpp"
#include "fn_revertKirbyModel?.hpp"
#include "fn_80193BD8.hpp"



void fn_801B1084(PPC::Runtime::GCContext* context)
{
/*801B1084 001ADE84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B1088 001ADE88*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B108C 001ADE8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B1090 001ADE90*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801B1094 001ADE94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B1098 001ADE98*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B109C 001ADE9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7fc, context->r3));
/*801B10A0 001ADEA0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7e8, context->r3));
/*801B10A4 001ADEA4*/ PPC::Runtime::ASM::bl(fn_ability_Sleep_end);
/*801B10A8 001ADEA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B10AC 001ADEAC*/ PPC::Runtime::ASM::bl(fn_revertKirbyModel?);
/*801B10B0 001ADEB0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801B10B4 001ADEB4*/ PPC::Runtime::ASM::bl(fn_80193BD8);
/*801B10B8 001ADEB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B10BC 001ADEBC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B10C0 001ADEC0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B10C4 001ADEC4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B10C8 001ADEC8*/ PPC::Runtime::ASM::blr();
}