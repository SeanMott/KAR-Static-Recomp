//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_80122FC8(PPC::Runtime::GCContext* context)
{
/*80122FC8 0011FDC8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80122FCC 0011FDCC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80122FD0 0011FDD0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122FD4 0011FDD4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80122FD8 0011FDD8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80122FDC 0011FDDC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80122FE0 0011FDE0*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*80122FE4 0011FDE4*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80122FE8 0011FDE8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x590, context->r3));
/*80122FEC 0011FDEC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80122FF0 0011FDF0*/ PPC::Runtime::ASM::beq(.L_80122FF8);
/*80122FF4 0011FDF4*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80122FF8, 0x80122FF8) //this is a jump label
/*80122FF8 0011FDF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80122FFC 0011FDFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80123000 0011FE00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80123004 0011FE04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80123008 0011FE08*/ PPC::Runtime::ASM::blr();
}