//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80446820.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn___assert.hpp"
#include "OSRestoreInterrupts.hpp"
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"
#include "fn_80446820.hpp"



void fn_804463E4(PPC::Runtime::GCContext* context)
{
/*804463E4 004431E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804463E8 004431E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804463EC 004431EC*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*804463F0 004431F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804463F4 004431F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804463F8 004431F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*804463FC 004431FC*/ PPC::Runtime::ASM::bne(.L_8044640C);
/*80446400 00443200*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*80446404 00443204*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DE4A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446408 00443208*/ PPC::Runtime::ASM::b(.L_80446564);
RUNTIME_PPC_JUMP_LABEL(.L_8044640C, 0x8044640C) //this is a jump label
/*8044640C 0044320C*/ PPC::Runtime::ASM::lwz(context->r6, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446410 00443210*/ PPC::Runtime::ASM::lis(context->r0, 0x8);
/*80446414 00443214*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r6));
/*80446418 00443218*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*8044641C 0044321C*/ PPC::Runtime::ASM::ble(.L_8044645C);
/*80446420 00443220*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80446424 00443224*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80446428 00443228*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x8);
/*8044642C 0044322C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r6));
/*80446430 00443230*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446434 00443234*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80446438 00443238*/ PPC::Runtime::ASM::addis(context->r3, context->r3, 0x8);
/*8044643C 0044323C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r4));
/*80446440 00443240*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446444 00443244*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80446448 00443248*/ PPC::Runtime::ASM::subis(context->r3, context->r3, 0x8);
/*8044644C 0044324C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*80446450 00443250*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_19 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446454 00443254*/ PPC::Runtime::ASM::bl(fn_80446820);
/*80446458 00443258*/ PPC::Runtime::ASM::b(.L_80446564);
RUNTIME_PPC_JUMP_LABEL(.L_8044645C, 0x8044645C) //this is a jump label
/*8044645C 0044325C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r6));
/*80446460 00443260*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*80446464 00443264*/ PPC::Runtime::ASM::beq(.L_8044648C);
/*80446468 00443268*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4A8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044646C 0044326C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80446470 00443270*/ PPC::Runtime::ASM::bne(.L_8044648C);
/*80446474 00443274*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*80446478 00443278*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8044647C 0044327C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r6));
/*80446480 00443280*/ PPC::Runtime::ASM::lhz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1a, context->r6));
/*80446484 00443284*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80446488 00443288*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_8044648C, 0x8044648C) //this is a jump label
/*8044648C 0044328C*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446490 00443290*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80446494 00443294*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80446498 00443298*/ PPC::Runtime::ASM::lis(context->r4, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_HighBit);
/*8044649C 0044329C*/ PPC::Runtime::ASM::addi(context->r5, context->r4, STRUCT_BYTE4_COUNT_18058EC80 @ Get_MemoryOffset_LowBit);
/*804464A0 004432A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*804464A4 004432A4*/ PPC::Runtime::ASM::clrlslwi(context->r6, context->r0, 30, 2);
/*804464A8 004432A8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r5, context->r6);
/*804464AC 004432AC*/ PPC::Runtime::ASM::cmplw(context->r4, context->r30);
/*804464B0 004432B0*/ PPC::Runtime::ASM::bne(.L_80446518);
/*804464B4 004432B4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058EC90 @ Get_MemoryOffset_HighBit);
/*804464B8 004432B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804464BC 004432BC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058EC90 @ Get_MemoryOffset_LowBit);
/*804464C0 004432C0*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r6);
/*804464C4 004432C4*/ PPC::Runtime::ASM::stwx(context->r4, context->r5, context->r6);
/*804464C8 004432C8*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*804464CC 004432CC*/ PPC::Runtime::ASM::bne(.L_80446538);
/*804464D0 004432D0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804464D4 004432D4*/ PPC::Runtime::ASM::stwx(context->r0, context->r3, context->r6);
/*804464D8 004432D8*/ PPC::Runtime::ASM::b(.L_80446538);
/*804464DC 004432DC*/ PPC::Runtime::ASM::b(.L_80446518);
RUNTIME_PPC_JUMP_LABEL(.L_804464E0, 0x804464E0) //this is a jump label
/*804464E0 004432E0*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*804464E4 004432E4*/ PPC::Runtime::ASM::bne(.L_80446514);
/*804464E8 004432E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*804464EC 004432EC*/ PPC::Runtime::ASM::lis(context->r3, lbl_8058EC90 @ Get_MemoryOffset_HighBit);
/*804464F0 004432F0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8058EC90 @ Get_MemoryOffset_LowBit);
/*804464F4 004432F4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*804464F8 004432F8*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r6);
/*804464FC 004432FC*/ PPC::Runtime::ASM::cmplw(context->r0, context->r30);
/*80446500 00443300*/ PPC::Runtime::ASM::bne(.L_80446508);
/*80446504 00443304*/ PPC::Runtime::ASM::stwx(context->r4, context->r3, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80446508, 0x80446508) //this is a jump label
/*80446508 00443308*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8044650C 0044330C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80446510 00443310*/ PPC::Runtime::ASM::b(.L_80446540);
RUNTIME_PPC_JUMP_LABEL(.L_80446514, 0x80446514) //this is a jump label
/*80446514 00443314*/ PPC::Runtime::ASM::mr(context->r4, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80446518, 0x80446518) //this is a jump label
/*80446518 00443318*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8044651C 0044331C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80446520 00443320*/ PPC::Runtime::ASM::bne(.L_804464E0);
/*80446524 00443324*/ PPC::Runtime::ASM::lis(context->r3, lbl_80508BE0 @ Get_MemoryOffset_HighBit);
/*80446528 00443328*/ PPC::Runtime::ASM::li(context->r4, 0x79);
/*8044652C 0044332C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_80508BE0 @ Get_MemoryOffset_LowBit);
/*80446530 00443330*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_347 @ Get_MemoryOffset_SDA21);
/*80446534 00443334*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80446538, 0x80446538) //this is a jump label
/*80446538 00443338*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8044653C 0044333C*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
RUNTIME_PPC_JUMP_LABEL(.L_80446540, 0x80446540) //this is a jump label
/*80446540 00443340*/ PPC::Runtime::ASM::lwz(context->r30, STRUCT_BYTE4_COUNT_1805DE4B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446544 00443344*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80446548 00443348*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8044654C 0044334C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80446550 00443350*/ PPC::Runtime::ASM::stw(context->r30, STRUCT_BYTE4_COUNT_1805DE4A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446554 00443354*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80446558 00443358*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8044655C 0044335C*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_19 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80446560 00443360*/ PPC::Runtime::ASM::bl(fn_80446820);
RUNTIME_PPC_JUMP_LABEL(.L_80446564, 0x80446564) //this is a jump label
/*80446564 00443364*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80446568 00443368*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8044656C 0044336C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80446570 00443370*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80446574 00443374*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80446578 00443378*/ PPC::Runtime::ASM::blr();
}