//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FE8DC.hpp"
#include "fn_80213E34.hpp"



void fn_80213C28(PPC::Runtime::GCContext* context)
{
/*80213C28 00210A28*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80213C2C 00210A2C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80213C30 00210A30*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E25B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80213C34 00210A34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213C38 00210A38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213C3C 00210A3C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80213C40 00210A40*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80213C44 00210A44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80213C48 00210A48*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*80213C4C 00210A4C*/ PPC::Runtime::ASM::bl(fn_801FE8DC);
/*80213C50 00210A50*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80213C54 00210A54*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58c, context->r31));
/*80213C58 00210A58*/ PPC::Runtime::ASM::beq(.L_80213C64);
/*80213C5C 00210A5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80213C60 00210A60*/ PPC::Runtime::ASM::bl(fn_80213E34);
RUNTIME_PPC_JUMP_LABEL(.L_80213C64, 0x80213C64) //this is a jump label
/*80213C64 00210A64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80213C68 00210A68*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80213C6C 00210A6C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80213C70 00210A70*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80213C74 00210A74*/ PPC::Runtime::ASM::blr();
}