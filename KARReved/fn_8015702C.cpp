//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80156F1C.hpp"
#include "fn_80156F1C.hpp"
#include "fn_80138B10.hpp"
#include "fn_80138A00.hpp"



void fn_8015702C(PPC::Runtime::GCContext* context)
{
/*8015702C 00153E2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80157030 00153E30*/ PPC::Runtime::ASM::mflr(context->r0);
/*80157034 00153E34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80157038 00153E38*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015703C 00153E3C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80157040 00153E40*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80157044 00153E44*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80157048 00153E48*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8015704C 00153E4C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80157050 00153E50*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x6d0);
/*80157054 00153E54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6d0, context->r3));
/*80157058 00153E58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8015705C 00153E5C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80157060 00153E60*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*80157064 00153E64*/ PPC::Runtime::ASM::lis(context->r4, fn_80156F1C @ Get_MemoryOffset_HighBit);
/*80157068 00153E68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8015706C 00153E6C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80157070 00153E70*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80157074 00153E74*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80156F1C @ Get_MemoryOffset_LowBit);
/*80157078 00153E78*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8015707C 00153E7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E07C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80157080 00153E80*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80157084 00153E84*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80157088 00153E88*/ PPC::Runtime::ASM::extsb(context->r4, context->r28);
/*8015708C 00153E8C*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*80157090 00153E90*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80157094 00153E94*/ PPC::Runtime::ASM::bl(fn_80138B10);
/*80157098 00153E98*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8015709C 00153E9C*/ PPC::Runtime::ASM::li(context->r4, 0x3b);
/*801570A0 00153EA0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801570A4 00153EA4*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*801570A8 00153EA8*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801570AC 00153EAC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801570B0 00153EB0*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*801570B4 00153EB4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*801570B8 00153EB8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801570BC 00153EBC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801570C0 00153EC0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801570C4 00153EC4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801570C8 00153EC8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801570CC 00153ECC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801570D0 00153ED0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801570D4 00153ED4*/ PPC::Runtime::ASM::blr();
}