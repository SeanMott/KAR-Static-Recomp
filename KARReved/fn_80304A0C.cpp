//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"



void fn_80304A0C(PPC::Runtime::GCContext* context)
{
/*80304A0C 0030180C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80304A10 00301810*/ PPC::Runtime::ASM::mflr(context->r0);
/*80304A14 00301814*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80304A18 00301818*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80304A1C 0030181C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80304A20 00301820*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80304A24 00301824*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80304A28 00301828*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80304A2C 0030182C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80304A30 00301830*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E3BD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80304A34 00301834*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80304A38 00301838*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x440, context->r3));
/*80304A3C 0030183C*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80304A40 00301840*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f1);
/*80304A44 00301844*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f2);
/*80304A48 00301848*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*80304A4C 0030184C*/ PPC::Runtime::ASM::mfcr(context->r0);
/*80304A50 00301850*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 2);
/*80304A54 00301854*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80304A58 00301858*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80304A5C 0030185C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80304A60 00301860*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80304A64 00301864*/ PPC::Runtime::ASM::blr();
}