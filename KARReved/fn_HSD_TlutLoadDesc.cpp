//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TlutAlloc.hpp"
#include "memcpy.hpp"



void fn_HSD_TlutLoadDesc(PPC::Runtime::GCContext* context)
{
/*803F55C4 003F23C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F55C8 003F23C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F55CC 003F23CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F55D0 003F23D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 803F55D4 003F23D4  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803F55D8 003F23D8*/ PPC::Runtime::ASM::beq(.L_803F55F8);
/*803F55DC 003F23DC*/ PPC::Runtime::ASM::bl(fn_HSD_TlutAlloc);
/*803F55E0 003F23E0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803F55E4 003F23E4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803F55E8 003F23E8*/ PPC::Runtime::ASM::li(context->r5, 0x10);
/*803F55EC 003F23EC*/ PPC::Runtime::ASM::bl(memcpy);
/*803F55F0 003F23F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F55F4 003F23F4*/ PPC::Runtime::ASM::b(.L_803F55FC);
RUNTIME_PPC_JUMP_LABEL(.L_803F55F8, 0x803F55F8) //this is a jump label
/*803F55F8 003F23F8*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803F55FC, 0x803F55FC) //this is a jump label
/*803F55FC 003F23FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F5600 003F2400*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F5604 003F2404*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F5608 003F2408*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F560C 003F240C*/ PPC::Runtime::ASM::blr();
}