//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80066DF8.hpp"
#include "fn_801394B0.hpp"
#include "fn_801394B0.hpp"



void fn_80139510(PPC::Runtime::GCContext* context)
{
/*80139510 00136310*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80139514 00136314*/ PPC::Runtime::ASM::mflr(context->r0);
/*80139518 00136318*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8013951C 0013631C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80139520 00136320*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80139524 00136324*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139528 00136328*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8013952C 0013632C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80139530 00136330*/ PPC::Runtime::ASM::li(context->r3, 0x28);
/*80139534 00136334*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80139538 00136338*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*8013953C 0013633C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80139540 00136340*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80139544 00136344*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80139548 00136348*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*8013954C 0013634C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80139550 00136350*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80139554 00136354*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*80139558 00136358*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8013955C 0013635C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80139560 00136360*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139564 00136364*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*80139568 00136368*/ PPC::Runtime::ASM::lis(context->r4, fn_801394B0 @ Get_MemoryOffset_HighBit);
/*8013956C 0013636C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139570 00136370*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801394B0 @ Get_MemoryOffset_LowBit);
/*80139574 00136374*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80139578 00136378*/ PPC::Runtime::ASM::bl(fn_80429728);
/*8013957C 0013637C*/ PPC::Runtime::ASM::li(context->r3, 0x7);
/*80139580 00136380*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80139584 00136384*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80139588 00136388*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*8013958C 0013638C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*80139590 00136390*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80139594 00136394*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80139598 00136398*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013959C 0013639C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801395A0 001363A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801395A4 001363A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801395A8 001363A8*/ PPC::Runtime::ASM::blr();
}