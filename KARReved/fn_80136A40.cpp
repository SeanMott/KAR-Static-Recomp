//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80166DCC.hpp"
#include "fn_80165E5C.hpp"
#include "fn_80166458.hpp"



void fn_80136A40(PPC::Runtime::GCContext* context)
{
/*80136A40 00133840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80136A44 00133844*/ PPC::Runtime::ASM::mflr(context->r0);
/*80136A48 00133848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80136A4C 0013384C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80136A50 00133850*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*80136A54 00133854*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80136A58 00133858*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80136A5C 0013385C*/ PPC::Runtime::ASM::mr(context->r6, context->r8);
/*80136A60 00133860*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136A64 00133864*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80136A68 00133868*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80136A6C 0013386C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80136A70 00133870*/ PPC::Runtime::ASM::bl(fn_80166DCC);
/*80136A74 00133874*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80136A78 00133878*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80136A7C 0013387C*/ PPC::Runtime::ASM::bl(fn_80165E5C);
/*80136A80 00133880*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80136A84 00133884*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80136A88 00133888*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80136A8C 0013388C*/ PPC::Runtime::ASM::bl(fn_80166458);
/*80136A90 00133890*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80136A94 00133894*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80136A98 00133898*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80136A9C 0013389C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80136AA0 001338A0*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80136AA4 001338A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80136AA8 001338A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80136AAC 001338AC*/ PPC::Runtime::ASM::blr();
}