//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_ObjAlloc.hpp"
#include "fn___assert.hpp"



void fn_HSD_MtxAlloc(PPC::Runtime::GCContext* context)
{
/*80417C54 00414A54*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80417C58 00414A58*/ PPC::Runtime::ASM::mflr(context->r0);
/*80417C5C 00414A5C*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058BBE4 @ Get_MemoryOffset_HighBit);
/*80417C60 00414A60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417C64 00414A64*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058BBE4 @ Get_MemoryOffset_LowBit);
/*80417C68 00414A68*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80417C6C 00414A6C*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/* 80417C70 00414A70  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80417C74 00414A74*/ PPC::Runtime::ASM::bne(.L_80417C88);
/*80417C78 00414A78*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_509 @ Get_MemoryOffset_SDA21);
/*80417C7C 00414A7C*/ PPC::Runtime::ASM::li(context->r4, 0x3ee);
/*80417C80 00414A80*/ PPC::Runtime::ASM::li(context->r5, String_ "mt" 9 @ Get_MemoryOffset_SDA21);
/*80417C84 00414A84*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80417C88, 0x80417C88) //this is a jump label
/*80417C88 00414A88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80417C8C 00414A8C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80417C90 00414A90*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80417C94 00414A94*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80417C98 00414A98*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80417C9C 00414A9C*/ PPC::Runtime::ASM::blr();
}