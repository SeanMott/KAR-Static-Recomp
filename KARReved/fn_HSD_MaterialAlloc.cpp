//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdAllocMemPiece.hpp"
#include "fn___assert.hpp"
#include "memset.hpp"



void fn_HSD_MaterialAlloc(PPC::Runtime::GCContext* context)
{
/*803FAE64 003F7C64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803FAE68 003F7C68*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FAE6C 003F7C6C*/ PPC::Runtime::ASM::li(context->r3, 0x14);
/*803FAE70 003F7C70*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAE74 003F7C74*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FAE78 003F7C78*/ PPC::Runtime::ASM::bl(fn_hsdAllocMemPiece);
/* 803FAE7C 003F7C7C  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*803FAE80 003F7C80*/ PPC::Runtime::ASM::bne(.L_803FAE94);
/*803FAE84 003F7C84*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_598 @ Get_MemoryOffset_SDA21);
/*803FAE88 003F7C88*/ PPC::Runtime::ASM::li(context->r4, 0x466);
/*803FAE8C 003F7C8C*/ PPC::Runtime::ASM::li(context->r5, String_ "ma" Get_MemoryOffset_SDA21);
/*803FAE90 003F7C90*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_803FAE94, 0x803FAE94) //this is a jump label
/*803FAE94 003F7C94*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FAE98 003F7C98*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803FAE9C 003F7C9C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*803FAEA0 003F7CA0*/ PPC::Runtime::ASM::bl(memset);
/*803FAEA4 003F7CA4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E5A0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803FAEA8 003F7CA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803FAEAC 003F7CAC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*803FAEB0 003F7CB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803FAEB4 003F7CB4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803FAEB8 003F7CB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FAEBC 003F7CBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803FAEC0 003F7CC0*/ PPC::Runtime::ASM::blr();
}