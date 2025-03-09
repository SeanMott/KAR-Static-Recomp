//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "fn_IPGetRemoteSocket.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_UDPGetLocalSocket(PPC::Runtime::GCContext* context)
{
/*80475608 00472408*/ PPC::Runtime::ASM::mflr(context->r0);
/*8047560C 0047240C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80475610 00472410*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80475614 00472414*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80475618 00472418*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047561C 0047241C*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*80475620 00472420*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80475624 00472424*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*80475628 00472428*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*8047562C 0047242C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80475630 00472430*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*80475634 00472434*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x6);
/*80475638 00472438*/ PPC::Runtime::ASM::beq(.L_80475644);
/*8047563C 0047243C*/ PPC::Runtime::ASM::li(context->r30, -0xc);
/*80475640 00472440*/ PPC::Runtime::ASM::b(.L_80475654);
RUNTIME_PPC_JUMP_LABEL(.L_80475644, 0x80475644) //this is a jump label
/*80475644 00472444*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*80475648 00472448*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*8047564C 0047244C*/ PPC::Runtime::ASM::bl(fn_IPGetRemoteSocket);
/*80475650 00472450*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80475654, 0x80475654) //this is a jump label
/*80475654 00472454*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80475658 00472458*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*8047565C 0047245C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80475660 00472460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80475664 00472464*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80475668 00472468*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8047566C 0047246C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80475670 00472470*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80475674 00472474*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80475678 00472478*/ PPC::Runtime::ASM::blr();
}