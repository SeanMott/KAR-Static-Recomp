//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114F04.hpp"
#include "fn_80114F04.hpp"
#include "fn_80114F04.hpp"



void fn_8012AB9C(PPC::Runtime::GCContext* context)
{
/*8012AB9C 0012799C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012ABA0 001279A0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012ABA4 001279A4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012ABA8 001279A8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012ABAC 001279AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012ABB0 001279B0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8012ABB4 001279B4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012ABB8 001279B8*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 2);
/*8012ABBC 001279BC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8012ABC0 001279C0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe0c, context->r3));
/*8012ABC4 001279C4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012ABC8 001279C8*/ PPC::Runtime::ASM::beq(.L_8012AC08);
/*8012ABCC 001279CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8012ABD0 001279D0*/ PPC::Runtime::ASM::bl(fn_80114F04);
/*8012ABD4 001279D4*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8012ABD8, 0x8012ABD8) //this is a jump label
/*8012ABD8 001279D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*8012ABDC 001279DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012ABE0 001279E0*/ PPC::Runtime::ASM::beq(.L_8012ABE8);
/*8012ABE4 001279E4*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012ABE8, 0x8012ABE8) //this is a jump label
/*8012ABE8 001279E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8012ABEC 001279EC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012ABF0 001279F0*/ PPC::Runtime::ASM::beq(.L_8012ABF8);
/*8012ABF4 001279F4*/ PPC::Runtime::ASM::bl(fn_80114F04);
RUNTIME_PPC_JUMP_LABEL(.L_8012ABF8, 0x8012ABF8) //this is a jump label
/*8012ABF8 001279F8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*8012ABFC 001279FC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*8012AC00 00127A00*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*8012AC04 00127A04*/ PPC::Runtime::ASM::blt(.L_8012ABD8);
RUNTIME_PPC_JUMP_LABEL(.L_8012AC08, 0x8012AC08) //this is a jump label
/*8012AC08 00127A08*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012AC0C 00127A0C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8012AC10 00127A10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8012AC14 00127A14*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012AC18 00127A18*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012AC1C 00127A1C*/ PPC::Runtime::ASM::blr();
}