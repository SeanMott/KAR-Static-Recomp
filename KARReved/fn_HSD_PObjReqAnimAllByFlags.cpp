//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjReqAnim.hpp"



void fn_HSD_PObjReqAnimAllByFlags(PPC::Runtime::GCContext* context)
{
/*80405438 00402238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8040543C 0040223C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80405440 00402240*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80405444 00402244*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80405448 00402248*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040544C 0040224C*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*80405450 00402250*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80405454 00402254*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80405458 00402258*/ PPC::Runtime::ASM::beq(.L_80405490);
/*8040545C 0040225C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80405460 00402260*/ PPC::Runtime::ASM::rlwinm(context->r31, context->r4, 0, 28, 28);
/*80405464 00402264*/ PPC::Runtime::ASM::b(.L_80405488);
RUNTIME_PPC_JUMP_LABEL(.L_80405468, 0x80405468) //this is a jump label
/*80405468 00402268*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8040546C 0040226C*/ PPC::Runtime::ASM::beq(.L_80405484);
/*80405470 00402270*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80405474 00402274*/ PPC::Runtime::ASM::beq(.L_80405484);
/*80405478 00402278*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*8040547C 0040227C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r30));
/*80405480 00402280*/ PPC::Runtime::ASM::bl(fn_HSD_AObjReqAnim);
RUNTIME_PPC_JUMP_LABEL(.L_80405484, 0x80405484) //this is a jump label
/*80405484 00402284*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80405488, 0x80405488) //this is a jump label
/*80405488 00402288*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8040548C 0040228C*/ PPC::Runtime::ASM::bne(.L_80405468);
RUNTIME_PPC_JUMP_LABEL(.L_80405490, 0x80405490) //this is a jump label
/*80405490 00402290*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80405494 00402294*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80405498 00402298*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040549C 0040229C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804054A0 004022A0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804054A4 004022A4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804054A8 004022A8*/ PPC::Runtime::ASM::blr();
}