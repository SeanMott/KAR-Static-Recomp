//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80428430(PPC::Runtime::GCContext* context)
{
/*80428430 00425230*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80428434 00425234*/ PPC::Runtime::ASM::mflr(context->r0);
/*80428438 00425238*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8042843C 0042523C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80428440 00425240*/ PPC::Runtime::ASM::mr(context->r31, context->r6);
/*80428444 00425244*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80428448 00425248*/ PPC::Runtime::ASM::mr(context->r30, context->r5);
/*8042844C 0042524C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80428450 00425250*/ PPC::Runtime::ASM::mr(context->r29, context->r4);
/*80428454 00425254*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80428458 00425258*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8042845C 0042525C*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE314 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80428460 00425260*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80428464 00425264*/ PPC::Runtime::ASM::beq(.L_80428478);
/*80428468 00425268*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8042846C 0042526C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80428470 00425270*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80428474 00425274*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80428478, 0x80428478) //this is a jump label
/*80428478 00425278*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE308 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8042847C 0042527C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80428480 00425280*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80428484 00425284*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*80428488 00425288*/ PPC::Runtime::ASM::mr(context->r6, context->r31);
/*8042848C 0042528C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80428490 00425290*/ PPC::Runtime::ASM::bctrl();
/*80428494 00425294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80428498 00425298*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8042849C 0042529C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*804284A0 004252A0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*804284A4 004252A4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804284A8 004252A8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*804284AC 004252AC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*804284B0 004252B0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*804284B4 004252B4*/ PPC::Runtime::ASM::blr();
}