//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80066DF8.hpp"
#include "fn_8011596C.hpp"
#include "fn_8011596C.hpp"



void fn_80115A64(PPC::Runtime::GCContext* context)
{
/*80115A64 00112864*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80115A68 00112868*/ PPC::Runtime::ASM::mflr(context->r0);
/*80115A6C 0011286C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80115A70 00112870*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115A74 00112874*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80115A78 00112878*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80115A7C 0011287C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80115A80 00112880*/ PPC::Runtime::ASM::li(context->r3, 0x5);
/*80115A84 00112884*/ PPC::Runtime::ASM::li(context->r4, 0x13);
/*80115A88 00112888*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80115A8C 0011288C*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80115A90 00112890*/ PPC::Runtime::ASM::lis(context->r4, MemoryOffset_1051 @ Get_MemoryOffset_HighBit);
/*80115A94 00112894*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80115A98 00112898*/ PPC::Runtime::ASM::addi(context->r0, context->r4, MemoryOffset_1051 @ Get_MemoryOffset_LowBit);
/*80115A9C 0011289C*/ PPC::Runtime::ASM::mr(context->r3, context->r0);
/*80115AA0 001128A0*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80115AA4 001128A4*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80115AA8 001128A8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80115AAC 001128AC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115AB0 001128B0*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80115AB4 001128B4*/ PPC::Runtime::ASM::lis(context->r4, fn_8011596C @ Get_MemoryOffset_HighBit);
/*80115AB8 001128B8*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80115ABC 001128BC*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_8011596C @ Get_MemoryOffset_LowBit);
/*80115AC0 001128C0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80115AC4 001128C4*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80115AC8 001128C8*/ PPC::Runtime::ASM::lis(context->r3, 0x10);
/*80115ACC 001128CC*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80115AD0 001128D0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80115AD4 001128D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80115AD8 001128D8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80115ADC 001128DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115AE0 001128E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80115AE4 001128E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80115AE8 001128E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115AEC 001128EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80115AF0 001128F0*/ PPC::Runtime::ASM::blr();
}