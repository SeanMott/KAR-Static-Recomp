//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_UnsetRun(PPC::Runtime::GCContext* context)
{
/*803D9BC4 003D69C4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r3));
/*803D9BC8 003D69C8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r3));
/*803D9BCC 003D69CC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*803D9BD0 003D69D0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r3));
/*803D9BD4 003D69D4*/ PPC::Runtime::ASM::bne(.L_803D9BE0);
/*803D9BD8 003D69D8*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*803D9BDC 003D69DC*/ PPC::Runtime::ASM::b(.L_803D9BE4);
RUNTIME_PPC_JUMP_LABEL(.L_803D9BE0, 0x803D9BE0) //this is a jump label
/*803D9BE0 003D69E0*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_803D9BE4, 0x803D9BE4) //this is a jump label
/*803D9BE4 003D69E4*/ PPC::Runtime::ASM::cmplwi(context->r6, 0x0);
/*803D9BE8 003D69E8*/ PPC::Runtime::ASM::bne(.L_803D9BF4);
/*803D9BEC 003D69EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D9BF0 003D69F0*/ PPC::Runtime::ASM::b(.L_803D9BF8);
RUNTIME_PPC_JUMP_LABEL(.L_803D9BF4, 0x803D9BF4) //this is a jump label
/*803D9BF4 003D69F4*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2e0, context->r6));
RUNTIME_PPC_JUMP_LABEL(.L_803D9BF8, 0x803D9BF8) //this is a jump label
/*803D9BF8 003D69F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*803D9BFC 003D69FC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D9C00 003D6A00*/ PPC::Runtime::ASM::bne(.L_803D9C20);
/*803D9C04 003D6A04*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d0, context->r3));
/*803D9C08 003D6A08*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*803D9C0C 003D6A0C*/ PPC::Runtime::ASM::lwz(context->r5, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D9C10 003D6A10*/ PPC::Runtime::ASM::subfic(context->r0, context->r0, 0x1f);
/*803D9C14 003D6A14*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r0);
/*803D9C18 003D6A18*/ PPC::Runtime::ASM::andc(context->r0, context->r5, context->r0);
/*803D9C1C 003D6A1C*/ PPC::Runtime::ASM::stw(context->r0, RunQueueBits_805DDF28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803D9C20, 0x803D9C20) //this is a jump label
/*803D9C20 003D6A20*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803D9C24 003D6A24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2dc, context->r3));
/*803D9C28 003D6A28*/ PPC::Runtime::ASM::blr();
}