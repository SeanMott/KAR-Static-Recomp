//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D1E68.hpp"



void fn_801D1DEC(PPC::Runtime::GCContext* context)
{
/*801D1DEC 001CEBEC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801D1DF0 001CEBF0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801D1DF4 001CEBF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D1DF8 001CEBF8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 1);
/*801D1DFC 001CEBFC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D1E00 001CEC00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D1E04 001CEC04*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801D1E08 001CEC08*/ PPC::Runtime::ASM::add(context->r3, context->r30, context->r0);
/*801D1E0C 001CEC0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x685, context->r3));
/*801D1E10 001CEC10*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*801D1E14 001CEC14*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*801D1E18 001CEC18*/ PPC::Runtime::ASM::beq(.L_801D1E50);
/*801D1E1C 001CEC1C*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x685, context->r3));
/*801D1E20 001CEC20*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801D1E24 001CEC24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801D1E28 001CEC28*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r30));
/*801D1E2C 001CEC2C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 2, 29, 29);
/*801D1E30 001CEC30*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_801D1E34, 0x801D1E34) //this is a jump label
/*801D1E34 001CEC34*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801D1E38 001CEC38*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x678);
/*801D1E3C 001CEC3C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x304);
/*801D1E40 001CEC40*/ PPC::Runtime::ASM::bl(fn_801D1E68);
/*801D1E44 001CEC44*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801D1E48 001CEC48*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x6);
/*801D1E4C 001CEC4C*/ PPC::Runtime::ASM::blt(.L_801D1E34);
RUNTIME_PPC_JUMP_LABEL(.L_801D1E50, 0x801D1E50) //this is a jump label
/*801D1E50 001CEC50*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801D1E54 001CEC54*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801D1E58 001CEC58*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801D1E5C 001CEC5C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801D1E60 001CEC60*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801D1E64 001CEC64*/ PPC::Runtime::ASM::blr();
}