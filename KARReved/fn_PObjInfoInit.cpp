//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_hsdInitClassInfo.hpp"
#include "fn_PObjRelease.hpp"
#include "fn_PObjAmnesia.hpp"
#include "fn_HSD_PObjDisp?.hpp"
#include "fn_PObjSetupMtx?.hpp"
#include "fn_PObjLoad.hpp"
#include "fn_PObjUpdateFunc.hpp"
#include "fn_PObjRelease.hpp"
#include "fn_PObjAmnesia.hpp"
#include "fn_HSD_PObjDisp?.hpp"
#include "fn_PObjSetupMtx?.hpp"
#include "fn_PObjLoad.hpp"
#include "fn_PObjUpdateFunc.hpp"



void fn_PObjInfoInit(PPC::Runtime::GCContext* context)
{
/*80407E48 00404C48*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80407E4C 00404C4C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80407E50 00404C50*/ PPC::Runtime::ASM::lis(context->r4, lbl_80503488 @ Get_MemoryOffset_HighBit);
/*80407E54 00404C54*/ PPC::Runtime::ASM::lis(context->r3, lbl_805047A8 @ Get_MemoryOffset_HighBit);
/*80407E58 00404C58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80407E5C 00404C5C*/ PPC::Runtime::ASM::li(context->r7, 0x4c);
/*80407E60 00404C60*/ PPC::Runtime::ASM::li(context->r8, 0x1c);
/*80407E64 00404C64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80407E68 00404C68*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_80503488 @ Get_MemoryOffset_LowBit);
/*80407E6C 00404C6C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_805047A8 @ Get_MemoryOffset_LowBit);
/*80407E70 00404C70*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*80407E74 00404C74*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x318);
/*80407E78 00404C78*/ PPC::Runtime::ASM::addi(context->r6, context->r31, 0x330);
/*80407E7C 00404C7C*/ PPC::Runtime::ASM::bl(fn_hsdInitClassInfo);
/*80407E80 00404C80*/ PPC::Runtime::ASM::lis(context->r8, fn_PObjRelease @ Get_MemoryOffset_HighBit);
/*80407E84 00404C84*/ PPC::Runtime::ASM::lis(context->r7, fn_PObjAmnesia @ Get_MemoryOffset_HighBit);
/*80407E88 00404C88*/ PPC::Runtime::ASM::lis(context->r6, fn_HSD_PObjDisp? @ Get_MemoryOffset_HighBit);
/*80407E8C 00404C8C*/ PPC::Runtime::ASM::lis(context->r5, fn_PObjSetupMtx? @ Get_MemoryOffset_HighBit);
/*80407E90 00404C90*/ PPC::Runtime::ASM::lis(context->r4, fn_PObjLoad @ Get_MemoryOffset_HighBit);
/*80407E94 00404C94*/ PPC::Runtime::ASM::lis(context->r3, fn_PObjUpdateFunc @ Get_MemoryOffset_HighBit);
/*80407E98 00404C98*/ PPC::Runtime::ASM::addi(context->r9, context->r8, fn_PObjRelease @ Get_MemoryOffset_LowBit);
/*80407E9C 00404C9C*/ PPC::Runtime::ASM::addi(context->r8, context->r31, 0x0);
/*80407EA0 00404CA0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, fn_PObjAmnesia @ Get_MemoryOffset_LowBit);
/*80407EA4 00404CA4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, fn_HSD_PObjDisp? @ Get_MemoryOffset_LowBit);
/*80407EA8 00404CA8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, fn_PObjSetupMtx? @ Get_MemoryOffset_LowBit);
/*80407EAC 00404CAC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_PObjLoad @ Get_MemoryOffset_LowBit);
/*80407EB0 00404CB0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_PObjUpdateFunc @ Get_MemoryOffset_LowBit);
/*80407EB4 00404CB4*/ PPC::Runtime::ASM::stw(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r8));
/*80407EB8 00404CB8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r8));
/*80407EBC 00404CBC*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r8));
/*80407EC0 00404CC0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r8));
/*80407EC4 00404CC4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r8));
/*80407EC8 00404CC8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r8));
/*80407ECC 00404CCC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80407ED0 00404CD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80407ED4 00404CD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80407ED8 00404CD8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80407EDC 00404CDC*/ PPC::Runtime::ASM::blr();
}