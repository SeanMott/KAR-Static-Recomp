//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdAllocMemPiece.hpp"
#include "fn___assert.hpp"
#include "memset.hpp"



void fn_HSD_TObjTevAlloc(PPC::Runtime::GCContext* context)
{
/*803F79A8 003F47A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803F79AC 003F47AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F79B0 003F47B0*/ PPC::Runtime::ASM::li(context->r3, 0x20);
/*803F79B4 003F47B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F79B8 003F47B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F79BC 003F47BC*/ PPC::Runtime::ASM::bl(fn_hsdAllocMemPiece);
/* 803F79C0 003F47C0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803F79C4 003F47C4*/ PPC::Runtime::ASM::bne(.L_803F79D8);
/*803F79C8 003F47C8*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_1278 @ Get_MemoryOffset_SDA21);
/*803F79CC 003F47CC*/ PPC::Runtime::ASM::li(context->r4, 0x89d);
/*803F79D0 003F47D0*/ PPC::Runtime::ASM::li(context->r5, String_ "te" Get_MemoryOffset_SDA21);
/*803F79D4 003F47D4*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803F79D8, 0x803F79D8) //this is a jump label
/*803F79D8 003F47D8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F79DC 003F47DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803F79E0 003F47E0*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*803F79E4 003F47E4*/ PPC::Runtime::ASM::bl(memset);
/*803F79E8 003F47E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803F79EC 003F47EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803F79F0 003F47F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F79F4 003F47F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F79F8 003F47F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803F79FC 003F47FC*/ PPC::Runtime::ASM::blr();
}