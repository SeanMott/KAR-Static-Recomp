//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039F484(PPC::Runtime::GCContext* context)
{
/*8039F484 0039C284*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8039F488 0039C288*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039F48C 0039C28C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039F490 0039C290*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8039F494 0039C294*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039F498 0039C298*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039F49C 0039C29C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039F4A0 0039C2A0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039F4A4 0039C2A4*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039F4A8 0039C2A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F4AC 0039C2AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F4B0 0039C2B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039F4B4 0039C2B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F4B8 0039C2B8*/ PPC::Runtime::ASM::bctrl();
/*8039F4BC 0039C2BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F4C0 0039C2C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039F4C4 0039C2C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F4C8 0039C2C8*/ PPC::Runtime::ASM::bctrl();
/*8039F4CC 0039C2CC*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8039F4D0 0039C2D0*/ PPC::Runtime::ASM::b(.L_8039F564);
RUNTIME_PPC_JUMP_LABEL(.L_8039F4D4, 0x8039F4D4) //this is a jump label
/*8039F4D4 0039C2D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F4D8 0039C2D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F4DC 0039C2DC*/ PPC::Runtime::ASM::beq(.L_8039F4F8);
/*8039F4E0 0039C2E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F4E4 0039C2E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F4E8 0039C2E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F4EC 0039C2EC*/ PPC::Runtime::ASM::bctrl();
/*8039F4F0 0039C2F0*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039F4F4 0039C2F4*/ PPC::Runtime::ASM::b(.L_8039F4FC);
RUNTIME_PPC_JUMP_LABEL(.L_8039F4F8, 0x8039F4F8) //this is a jump label
/*8039F4F8 0039C2F8*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F4FC, 0x8039F4FC) //this is a jump label
/*8039F4FC 0039C2FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F500 0039C300*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F504 0039C304*/ PPC::Runtime::ASM::beq(.L_8039F51C);
/*8039F508 0039C308*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F50C 0039C30C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F510 0039C310*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F514 0039C314*/ PPC::Runtime::ASM::bctrl();
/*8039F518 0039C318*/ PPC::Runtime::ASM::b(.L_8039F520);
RUNTIME_PPC_JUMP_LABEL(.L_8039F51C, 0x8039F51C) //this is a jump label
/*8039F51C 0039C31C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F520, 0x8039F520) //this is a jump label
/*8039F520 0039C320*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*8039F524 0039C324*/ PPC::Runtime::ASM::add(context->r5, context->r3, context->r30);
/*8039F528 0039C328*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F52C 0039C32C*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8039F530 0039C330*/ PPC::Runtime::ASM::add(context->r5, context->r4, context->r5);
/*8039F534 0039C334*/ PPC::Runtime::ASM::cmplw(context->r0, context->r5);
/*8039F538 0039C338*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039F53C 0039C33C*/ PPC::Runtime::ASM::bge(.L_8039F544);
/*8039F540 0039C340*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
RUNTIME_PPC_JUMP_LABEL(.L_8039F544, 0x8039F544) //this is a jump label
/*8039F544 0039C344*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F548 0039C348*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8039F54C 0039C34C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F550 0039C350*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8039F554 0039C354*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039F558 0039C358*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F55C 0039C35C*/ PPC::Runtime::ASM::bctrl();
/*8039F560 0039C360*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039F564, 0x8039F564) //this is a jump label
/*8039F564 0039C364*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8039F568 0039C368*/ PPC::Runtime::ASM::bne(.L_8039F4D4);
/*8039F56C 0039C36C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039F570 0039C370*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039F574 0039C374*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039F578 0039C378*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F57C 0039C37C*/ PPC::Runtime::ASM::bctrl();
/*8039F580 0039C380*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F584 0039C384*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039F588 0039C388*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F58C 0039C38C*/ PPC::Runtime::ASM::bctrl();
/*8039F590 0039C390*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8039F594 0039C394*/ PPC::Runtime::ASM::b(.L_8039F644);
RUNTIME_PPC_JUMP_LABEL(.L_8039F598, 0x8039F598) //this is a jump label
/*8039F598 0039C398*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F59C 0039C39C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F5A0 0039C3A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F5A4 0039C3A4*/ PPC::Runtime::ASM::beq(.L_8039F5C0);
/*8039F5A8 0039C3A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F5AC 0039C3AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039F5B0 0039C3B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F5B4 0039C3B4*/ PPC::Runtime::ASM::bctrl();
/*8039F5B8 0039C3B8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039F5BC 0039C3BC*/ PPC::Runtime::ASM::b(.L_8039F5C4);
RUNTIME_PPC_JUMP_LABEL(.L_8039F5C0, 0x8039F5C0) //this is a jump label
/*8039F5C0 0039C3C0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F5C4, 0x8039F5C4) //this is a jump label
/*8039F5C4 0039C3C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F5C8 0039C3C8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F5CC 0039C3CC*/ PPC::Runtime::ASM::beq(.L_8039F5E4);
/*8039F5D0 0039C3D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F5D4 0039C3D4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039F5D8 0039C3D8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F5DC 0039C3DC*/ PPC::Runtime::ASM::bctrl();
/*8039F5E0 0039C3E0*/ PPC::Runtime::ASM::b(.L_8039F5E8);
RUNTIME_PPC_JUMP_LABEL(.L_8039F5E4, 0x8039F5E4) //this is a jump label
/*8039F5E4 0039C3E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039F5E8, 0x8039F5E8) //this is a jump label
/*8039F5E8 0039C3E8*/ PPC::Runtime::ASM::subf(context->r0, context->r3, context->r29);
/*8039F5EC 0039C3EC*/ PPC::Runtime::ASM::subf(context->r0, context->r30, context->r0);
/*8039F5F0 0039C3F0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r28));
/*8039F5F4 0039C3F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F5F8 0039C3F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F5FC 0039C3FC*/ PPC::Runtime::ASM::beq(.L_8039F610);
/*8039F600 0039C400*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F604 0039C404*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8039F608 0039C408*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F60C 0039C40C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8039F610, 0x8039F610) //this is a jump label
/*8039F610 0039C410*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r28));
/*8039F614 0039C414*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039F618 0039C418*/ PPC::Runtime::ASM::beq(.L_8039F62C);
/*8039F61C 0039C41C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039F620 0039C420*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r12));
/*8039F624 0039C424*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F628 0039C428*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8039F62C, 0x8039F62C) //this is a jump label
/*8039F62C 0039C42C*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8039F630 0039C430*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8039F634 0039C434*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039F638 0039C438*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039F63C 0039C43C*/ PPC::Runtime::ASM::bctrl();
/*8039F640 0039C440*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039F644, 0x8039F644) //this is a jump label
/*8039F644 0039C444*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8039F648 0039C448*/ PPC::Runtime::ASM::bne(.L_8039F598);
/*8039F64C 0039C44C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039F650 0039C450*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*8039F654 0039C454*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8039F658 0039C458*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8039F65C 0039C45C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8039F660 0039C460*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039F664 0039C464*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039F668 0039C468*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039F66C 0039C46C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8039F670 0039C470*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039F674 0039C474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8039F678 0039C478*/ PPC::Runtime::ASM::blr();
}