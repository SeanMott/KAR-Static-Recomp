//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_801388A8.hpp"
#include "fn_80183874.hpp"
#include "fn_80183874.hpp"
#include "fn_801389D8.hpp"
#include "fn_80138A00.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_801838C4(PPC::Runtime::GCContext* context)
{
/*801838C4 001806C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801838C8 001806C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801838CC 001806CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801838D0 001806D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801838D4 001806D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801838D8 001806D8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801838DC 001806DC*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801838E0 001806E0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801838E4 001806E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x115c, context->r3));
/*801838E8 001806E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801838EC 001806EC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801838F0 001806F0*/ PPC::Runtime::ASM::bl(fn_801388A8);
/*801838F4 001806F4*/ PPC::Runtime::ASM::lis(context->r4, fn_80183874 @ Get_MemoryOffset_HighBit);
/*801838F8 001806F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*801838FC 001806FC*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80183900 00180700*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80183904 00180704*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80183874 @ Get_MemoryOffset_LowBit);
/*80183908 00180708*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*8018390C 0018070C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x115c, context->r30));
/*80183910 00180710*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80183914 00180714*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0E70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80183918 00180718*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8018391C 0018071C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0E74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80183920 00180720*/ PPC::Runtime::ASM::bl(fn_801389D8);
/*80183924 00180724*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80183928 00180728*/ PPC::Runtime::ASM::li(context->r4, 0xba);
/*8018392C 0018072C*/ PPC::Runtime::ASM::bl(fn_80138A00);
/*80183930 00180730*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80183934 00180734*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80183938 00180738*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*8018393C 0018073C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80183940 00180740*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r31));
/*80183944 00180744*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80183948 00180748*/ PPC::Runtime::ASM::li(context->r4, 0x9);
/*8018394C 0018074C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80183950 00180750*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*80183954 00180754*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80183958 00180758*/ PPC::Runtime::ASM::li(context->r4, 0xa);
/*8018395C 0018075C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80183960 00180760*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80183964 00180764*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80183968 00180768*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8018396C 0018076C*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80183970 00180770*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80183974 00180774*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1160, context->r30));
/*80183978 00180778*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8018397C 0018077C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80183980 00180780*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80183984 00180784*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80183988 00180788*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8018398C 0018078C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80183990 00180790*/ PPC::Runtime::ASM::blr();
}