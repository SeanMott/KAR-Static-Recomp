//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800644AC.hpp"



void fn_80067438(PPC::Runtime::GCContext* context)
{
/*80067438 00064238*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8006743C 0006423C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80067440 00064240*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80067444 00064244*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80067448 00064248*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8006744C 0006424C*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x10);
/*80067450 00064250*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80067454 00064254*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*80067458 00064258*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8006745C 0006425C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80067460 00064260*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80067464 00064264*/ PPC::Runtime::ASM::bl(fn_800644AC);
/*80067468 00064268*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8006746C 0006426C*/ PPC::Runtime::ASM::bne(.L_80067478);
/*80067470 00064270*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067474 00064274*/ PPC::Runtime::ASM::b(.L_80067538);
RUNTIME_PPC_JUMP_LABEL(.L_80067478, 0x80067478) //this is a jump label
/*80067478 00064278*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8006747C 0006427C*/ PPC::Runtime::ASM::beq(.L_80067498);
/*80067480 00064280*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80067484 00064284*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80067488 00064288*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8006748C 0006428C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80067490 00064290*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80067494 00064294*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80067498, 0x80067498) //this is a jump label
/*80067498 00064298*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8006749C 0006429C*/ PPC::Runtime::ASM::beq(.L_80067534);
/*800674A0 000642A0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*800674A4 000642A4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DEB28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800674A8 000642A8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f1);
/*800674AC 000642AC*/ PPC::Runtime::ASM::bgt(.L_800674D0);
/*800674B0 000642B0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DEB2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800674B4 000642B4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f2, context->f0);
/*800674B8 000642B8*/ PPC::Runtime::ASM::blt(.L_800674D0);
/*800674BC 000642BC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800674C0 000642C0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f1);
/*800674C4 000642C4*/ PPC::Runtime::ASM::bgt(.L_800674D0);
/*800674C8 000642C8*/ PPC::Runtime::ASM::fcmpo(cr0, context->f3, context->f0);
/*800674CC 000642CC*/ PPC::Runtime::ASM::bge(.L_800674D8);
RUNTIME_PPC_JUMP_LABEL(.L_800674D0, 0x800674D0) //this is a jump label
/*800674D0 000642D0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800674D4 000642D4*/ PPC::Runtime::ASM::b(.L_80067538);
RUNTIME_PPC_JUMP_LABEL(.L_800674D8, 0x800674D8) //this is a jump label
/*800674D8 000642D8*/ PPC::Runtime::ASM::fctiwz(context->f1, context->f2);
/*800674DC 000642DC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*800674E0 000642E0*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f3);
/*800674E4 000642E4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800674E8 000642E8*/ PPC::Runtime::ASM::stfd(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*800674EC 000642EC*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*800674F0 000642F0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800674F4 000642F4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*800674F8 000642F8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetScissor);
/*800674FC 000642FC*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80067500 00064300*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*80067504 00064304*/ PPC::Runtime::ASM::blt(.L_8006752C);
/*80067508 00064308*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8006750C 0006430C*/ PPC::Runtime::ASM::cmpw(context->r31, context->r0);
/*80067510 00064310*/ PPC::Runtime::ASM::bge(.L_8006752C);
/*80067514 00064314*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80067518 00064318*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*8006751C 0006431C*/ PPC::Runtime::ASM::blt(.L_8006752C);
/*80067520 00064320*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*80067524 00064324*/ PPC::Runtime::ASM::cmpw(context->r30, context->r0);
/*80067528 00064328*/ PPC::Runtime::ASM::blt(.L_80067534);
RUNTIME_PPC_JUMP_LABEL(.L_8006752C, 0x8006752C) //this is a jump label
/*8006752C 0006432C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80067530 00064330*/ PPC::Runtime::ASM::b(.L_80067538);
RUNTIME_PPC_JUMP_LABEL(.L_80067534, 0x80067534) //this is a jump label
/*80067534 00064334*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80067538, 0x80067538) //this is a jump label
/*80067538 00064338*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8006753C 0006433C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80067540 00064340*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80067544 00064344*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80067548 00064348*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8006754C 0006434C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80067550 00064350*/ PPC::Runtime::ASM::blr();
}