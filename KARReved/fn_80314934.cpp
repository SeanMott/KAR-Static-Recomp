//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8030D510.hpp"
#include "fn_8030D510.hpp"



void fn_80314934(PPC::Runtime::GCContext* context)
{
/*80314934 00311734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80314938 00311738*/ PPC::Runtime::ASM::mflr(context->r0);
/*8031493C 0031173C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80314940 00311740*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80314944 00311744*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80314948 00311748*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8031494C 0031174C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80314950 00311750*/ PPC::Runtime::ASM::beq(.L_803149C4);
/*80314954 00311754*/ PPC::Runtime::ASM::bl(fn_8030D510);
/*80314958 00311758*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*8031495C 0031175C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80314960 00311760*/ PPC::Runtime::ASM::bl(fn_8030D510);
/*80314964 00311764*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*80314968 00311768*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031496C 0031176C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA078 @ Get_MemoryOffset_SDA21);
/*80314970 00311770*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA070 @ Get_MemoryOffset_SDA21);
/*80314974 00311774*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80314978 00311778*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8031497C 0031177C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80314980 00311780*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80314984 00311784*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*80314988 00311788*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8031498C 0031178C*/ PPC::Runtime::ASM::beq(.L_803149D0);
/*80314990 00311790*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDBC8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80314994 00311794*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80314998 00311798*/ PPC::Runtime::ASM::li(context->r5, lbl_805DA078 @ Get_MemoryOffset_SDA21);
/*8031499C 0031179C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DA070 @ Get_MemoryOffset_SDA21);
/*803149A0 003117A0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803149A4 003117A4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803149A8 003117A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*803149AC 003117AC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803149B0 003117B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803149B4 003117B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803149B8 003117B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803149BC 003117BC*/ PPC::Runtime::ASM::bctrl();
/*803149C0 003117C0*/ PPC::Runtime::ASM::b(.L_803149D0);
RUNTIME_PPC_JUMP_LABEL(.L_803149C4, 0x803149C4) //this is a jump label
/*803149C4 003117C4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3E50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803149C8 003117C8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*803149CC 003117CC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_803149D0, 0x803149D0) //this is a jump label
/*803149D0 003117D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803149D4 003117D4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803149D8 003117D8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803149DC 003117DC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803149E0 003117E0*/ PPC::Runtime::ASM::blr();
}