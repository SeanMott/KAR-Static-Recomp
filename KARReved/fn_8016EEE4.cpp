//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_8016EE74.hpp"
#include "fn_8016EE74.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_80138BA4.hpp"



void fn_8016EEE4(PPC::Runtime::GCContext* context)
{
/*8016EEE4 0016BCE4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016EEE8 0016BCE8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016EEEC 0016BCEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016EEF0 0016BCF0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016EEF4 0016BCF4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016EEF8 0016BCF8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016EEFC 0016BCFC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016EF00 0016BD00*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8016EF04 0016BD04*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8016EF08 0016BD08*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r3));
/*8016EF0C 0016BD0C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8016EF10 0016BD10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016EF14 0016BD14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8016EF18 0016BD18*/ PPC::Runtime::ASM::bl(fn_80138934);
/*8016EF1C 0016BD1C*/ PPC::Runtime::ASM::lis(context->r4, fn_8016EE74 @ Get_MemoryOffset_HighBit);
/*8016EF20 0016BD20*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*8016EF24 0016BD24*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8016EF28 0016BD28*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8016EF2C 0016BD2C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8016EE74 @ Get_MemoryOffset_LowBit);
/*8016EF30 0016BD30*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8016EF34 0016BD34*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016EF38 0016BD38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8016EF3C 0016BD3C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd4, context->r30));
/*8016EF40 0016BD40*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*8016EF44 0016BD44*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8016EF48 0016BD48*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*8016EF4C 0016BD4C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016EF50 0016BD50*/ PPC::Runtime::ASM::li(context->r4, 0x9c);
/*8016EF54 0016BD54*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*8016EF58 0016BD58*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8016EF5C 0016BD5C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8016EF60 0016BD60*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8016EF64 0016BD64*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016EF68 0016BD68*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8016EF6C 0016BD6C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016EF70 0016BD70*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8016EF74 0016BD74*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8016EF78 0016BD78*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*8016EF7C 0016BD7C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*8016EF80 0016BD80*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016EF84 0016BD84*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8016EF88 0016BD88*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016EF8C 0016BD8C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8016EF90 0016BD90*/ PPC::Runtime::ASM::bl(fn_80138BA4);
/*8016EF94 0016BD94*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbd8, context->r30));
/*8016EF98 0016BD98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016EF9C 0016BD9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016EFA0 0016BDA0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016EFA4 0016BDA4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016EFA8 0016BDA8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016EFAC 0016BDAC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016EFB0 0016BDB0*/ PPC::Runtime::ASM::blr();
}