//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_803EF1AC.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_803EFE30(PPC::Runtime::GCContext* context)
{
/*803EFE30 003ECC30*/ PPC::Runtime::ASM::mflr(context->r0);
/*803EFE34 003ECC34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803EFE38 003ECC38*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803EFE3C 003ECC3C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EFE40 003ECC40*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803EFE44 003ECC44*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803EFE48 003ECC48*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803EFE4C 003ECC4C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803EFE50 003ECC50*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c4, context->r31));
/*803EFE54 003ECC54*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803EFE58 003ECC58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803EFE5C 003ECC5C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*803EFE60 003ECC60*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*803EFE64 003ECC64*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*803EFE68 003ECC68*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r31));
/*803EFE6C 003ECC6C*/ PPC::Runtime::ASM::lfs(context->f5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d8, context->r31));
/*803EFE70 003ECC70*/ PPC::Runtime::ASM::lfs(context->f6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r31));
/*803EFE74 003ECC74*/ PPC::Runtime::ASM::bl(fn_803EF1AC);
/*803EFE78 003ECC78*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803EFE7C 003ECC7C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803EFE80 003ECC80*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803EFE84 003ECC84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803EFE88 003ECC88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803EFE8C 003ECC8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803EFE90 003ECC90*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*803EFE94 003ECC94*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803EFE98 003ECC98*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803EFE9C 003ECC9C*/ PPC::Runtime::ASM::blr();
}