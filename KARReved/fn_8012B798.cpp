//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"
#include "fn_80114EEC.hpp"



void fn_8012B798(PPC::Runtime::GCContext* context)
{
/*8012B798 00128598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012B79C 0012859C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012B7A0 001285A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012B7A4 001285A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012B7A8 001285A8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8012B7AC 001285AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012B7B0 001285B0*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012B7B4 001285B4*/ PPC::Runtime::ASM::addi(context->r30, context->r3, 0xc60);
/*8012B7B8 001285B8*/ PPC::Runtime::ASM::slwi(context->r31, context->r31, 2);
/*8012B7BC 001285BC*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r31);
/*8012B7C0 001285C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8012B7C4 001285C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B7C8 001285C8*/ PPC::Runtime::ASM::beq(.L_8012B7D0);
/*8012B7CC 001285CC*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012B7D0, 0x8012B7D0) //this is a jump label
/*8012B7D0 001285D0*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r31);
/*8012B7D4 001285D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8012B7D8 001285D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012B7DC 001285DC*/ PPC::Runtime::ASM::beq(.L_8012B7E4);
/*8012B7E0 001285E0*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012B7E4, 0x8012B7E4) //this is a jump label
/*8012B7E4 001285E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012B7E8 001285E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012B7EC 001285EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012B7F0 001285F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012B7F4 001285F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012B7F8 001285F8*/ PPC::Runtime::ASM::blr();
}