//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80138934.hpp"
#include "fn_80170F94.hpp"
#include "fn_80170F94.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80171050(PPC::Runtime::GCContext* context)
{
/*80171050 0016DE50*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80171054 0016DE54*/ PPC::Runtime::ASM::mflr(context->r0);
/*80171058 0016DE58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8017105C 0016DE5C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80171060 0016DE60*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80171064 0016DE64*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80171068 0016DE68*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8017106C 0016DE6C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80171070 0016DE70*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*80171074 0016DE74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4c, context->r3));
/*80171078 0016DE78*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8017107C 0016DE7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80171080 0016DE80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80171084 0016DE84*/ PPC::Runtime::ASM::bl(fn_80138934);
/*80171088 0016DE88*/ PPC::Runtime::ASM::lis(context->r4, fn_80170F94 @ Get_MemoryOffset_HighBit);
/*8017108C 0016DE8C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80171090 0016DE90*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80171094 0016DE94*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80171098 0016DE98*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80170F94 @ Get_MemoryOffset_LowBit);
/*8017109C 0016DE9C*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*801710A0 0016DEA0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc4c, context->r30));
/*801710A4 0016DEA4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801710A8 0016DEA8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0BD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801710AC 0016DEAC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*801710B0 0016DEB0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0BDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801710B4 0016DEB4*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*801710B8 0016DEB8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801710BC 0016DEBC*/ PPC::Runtime::ASM::li(context->r4, 0x8d);
/*801710C0 0016DEC0*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*801710C4 0016DEC4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801710C8 0016DEC8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801710CC 0016DECC*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801710D0 0016DED0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801710D4 0016DED4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*801710D8 0016DED8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801710DC 0016DEDC*/ PPC::Runtime::ASM::li(context->r4, 0x2);
/*801710E0 0016DEE0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801710E4 0016DEE4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*801710E8 0016DEE8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801710EC 0016DEEC*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*801710F0 0016DEF0*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*801710F4 0016DEF4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*801710F8 0016DEF8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801710FC 0016DEFC*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80171100 0016DF00*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80171104 0016DF04*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80171108 0016DF08*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*8017110C 0016DF0C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc50, context->r30));
/*80171110 0016DF10*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80171114 0016DF14*/ PPC::Runtime::ASM::mr(context->r29, context->r30);
RUNTIME_PPC_JUMP_LABEL(.L_80171118, 0x80171118) //this is a jump label
/*80171118 0016DF18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r29));
/*8017111C 0016DF1C*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*80171120 0016DF20*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80171124 0016DF24*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*80171128 0016DF28*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8017112C 0016DF2C*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x4);
/*80171130 0016DF30*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80171134 0016DF34*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0xc);
/*80171138 0016DF38*/ PPC::Runtime::ASM::blt(.L_80171118);
/*8017113C 0016DF3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80171140 0016DF40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80171144 0016DF44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80171148 0016DF48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8017114C 0016DF4C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80171150 0016DF50*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80171154 0016DF54*/ PPC::Runtime::ASM::blr();
}