//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_FuncDoesShit_5.hpp"



void fn_80162940(PPC::Runtime::GCContext* context)
{
/*80162940 0015F740*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80162944 0015F744*/ PPC::Runtime::ASM::mflr(context->r0);
/*80162948 0015F748*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016294C 0015F74C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80162950 0015F750*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80162954 0015F754*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80162958 0015F758*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016295C 0015F75C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80162960 0015F760*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80162964, 0x80162964) //this is a jump label
/*80162964 0015F764*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80162968 0015F768*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8016296C 0015F76C*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*80162970 0015F770*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r0);
/*80162974 0015F774*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r30));
/*80162978 0015F778*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016297C 0015F77C*/ PPC::Runtime::ASM::beq(.L_80162988);
/*80162980 0015F780*/ PPC::Runtime::ASM::bl(fn_80428F64);
/*80162984 0015F784*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80162988, 0x80162988) //this is a jump label
/*80162988 0015F788*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8016298C 0015F78C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x2);
/*80162990 0015F790*/ PPC::Runtime::ASM::blt(.L_80162964);
/*80162994 0015F794*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80162998 0015F798*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016299C 0015F79C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801629A0 0015F7A0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801629A4 0015F7A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801629A8 0015F7A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801629AC 0015F7AC*/ PPC::Runtime::ASM::blr();
}