//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80252A60.hpp"



void fn_802529F4(PPC::Runtime::GCContext* context)
{
/*802529F4 0024F7F4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802529F8 0024F7F8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802529FC 0024F7FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252A00 0024F800*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 1);
/*80252A04 0024F804*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80252A08 0024F808*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80252A0C 0024F80C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80252A10 0024F810*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80252A14 0024F814*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x155, context->r3));
/*80252A18 0024F818*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80252A1C 0024F81C*/ PPC::Runtime::ASM::cmpw(context->r5, context->r0);
/*80252A20 0024F820*/ PPC::Runtime::ASM::beq(.L_80252A48);
/*80252A24 0024F824*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x155, context->r3));
/*80252A28 0024F828*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80252A2C, 0x80252A2C) //this is a jump label
/*80252A2C 0024F82C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80252A30 0024F830*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x14c);
/*80252A34 0024F834*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x98);
/*80252A38 0024F838*/ PPC::Runtime::ASM::bl(fn_80252A60);
/*80252A3C 0024F83C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80252A40 0024F840*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*80252A44 0024F844*/ PPC::Runtime::ASM::blt(.L_80252A2C);
RUNTIME_PPC_JUMP_LABEL(.L_80252A48, 0x80252A48) //this is a jump label
/*80252A48 0024F848*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80252A4C 0024F84C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80252A50 0024F850*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80252A54 0024F854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80252A58 0024F858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80252A5C 0024F85C*/ PPC::Runtime::ASM::blr();
}