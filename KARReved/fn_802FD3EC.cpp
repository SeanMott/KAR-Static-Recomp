//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802FD3EC(PPC::Runtime::GCContext* context)
{
/*802FD3EC 002FA1EC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802FD3F0 002FA1F0*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*802FD3F4 002FA1F4*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3B08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FD3F8 002FA1F8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802FD3FC 002FA1FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FD400 002FA200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r4));
/*802FD404 002FA204*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r3));
/*802FD408 002FA208*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FD40C 002FA20C*/ PPC::Runtime::ASM::lfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FD410 002FA210*/ PPC::Runtime::ASM::fsubs(context->f1, context->f1, context->f2);
/*802FD414 002FA214*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802FD418 002FA218*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*802FD41C 002FA21C*/ PPC::Runtime::ASM::bne(.L_802FD430);
/*802FD420 002FA220*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802FD424 002FA224*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*802FD428 002FA228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r4));
/*802FD42C 002FA22C*/ PPC::Runtime::ASM::b(.L_802FD434);
RUNTIME_PPC_JUMP_LABEL(.L_802FD430, 0x802FD430) //this is a jump label
/*802FD430 002FA230*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_802FD434, 0x802FD434) //this is a jump label
/*802FD434 002FA234*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802FD438 002FA238*/ PPC::Runtime::ASM::blr();
}