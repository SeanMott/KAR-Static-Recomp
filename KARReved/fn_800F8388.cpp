//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F87E4.hpp"
#include "fn_8018C8C4.hpp"



void fn_800F8388(PPC::Runtime::GCContext* context)
{
/*800F8388 000F5188*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800F838C 000F518C*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F8390 000F5190*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F8394 000F5194*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F8398 000F5198*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*800F839C 000F519C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F83A0 000F51A0*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*800F83A4 000F51A4*/ PPC::Runtime::ASM::mr(context->r4, context->r5);
/*800F83A8 000F51A8*/ PPC::Runtime::ASM::mr(context->r5, context->r7);
/*800F83AC 000F51AC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F83B0 000F51B0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*800F83B4 000F51B4*/ PPC::Runtime::ASM::bl(fn_800F87E4);
/*800F83B8 000F51B8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800F83BC 000F51BC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r29));
/*800F83C0 000F51C0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800F83C4 000F51C4*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*800F83C8 000F51C8*/ PPC::Runtime::ASM::bl(fn_8018C8C4);
/*800F83CC 000F51CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800F83D0 000F51D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800F83D4 000F51D4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800F83D8 000F51D8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F83DC 000F51DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F83E0 000F51E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800F83E4 000F51E4*/ PPC::Runtime::ASM::blr();
}