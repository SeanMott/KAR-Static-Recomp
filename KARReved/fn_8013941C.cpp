//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_80066DF8.hpp"
#include "fn_801393A8.hpp"
#include "fn_801393A8.hpp"



void fn_8013941C(PPC::Runtime::GCContext* context)
{
/*8013941C 0013621C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80139420 00136220*/ PPC::Runtime::ASM::mflr(context->r0);
/*80139424 00136224*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80139428 00136228*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013942C 0013622C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80139430 00136230*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80139434 00136234*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80139438 00136238*/ PPC::Runtime::ASM::li(context->r3, 0x28);
/*8013943C 0013623C*/ PPC::Runtime::ASM::li(context->r4, 0x11);
/*80139440 00136240*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80139444 00136244*/ PPC::Runtime::ASM::bl(fn_GObj_Create);
/*80139448 00136248*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r31));
/*8013944C 0013624C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80139450 00136250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*80139454 00136254*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80139458 00136258*/ PPC::Runtime::ASM::bl(fn_80066DF8);
/*8013945C 0013625C*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80139460 00136260*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80139464 00136264*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139468 00136268*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8013946C 0013626C*/ PPC::Runtime::ASM::lis(context->r4, fn_801393A8 @ Get_MemoryOffset_HighBit);
/*80139470 00136270*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80139474 00136274*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_801393A8 @ Get_MemoryOffset_LowBit);
/*80139478 00136278*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*8013947C 0013627C*/ PPC::Runtime::ASM::bl(fn_80429728);
/*80139480 00136280*/ PPC::Runtime::ASM::lis(context->r3, 0x2000);
/*80139484 00136284*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80139488 00136288*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x1);
/*8013948C 0013628C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r30));
/*80139490 00136290*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r30));
/*80139494 00136294*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*80139498 00136298*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8013949C 0013629C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801394A0 001362A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801394A4 001362A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801394A8 001362A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801394AC 001362AC*/ PPC::Runtime::ASM::blr();
}