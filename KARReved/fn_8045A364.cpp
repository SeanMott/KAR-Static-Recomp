//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_OSLockMutex.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_8045BCA4.hpp"
#include "fn_OSUnlockMutex.hpp"
#include "fn_8045BFAC.hpp"



void fn_8045A364(PPC::Runtime::GCContext* context)
{
/*8045A364 00457164*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8045A368 00457168*/ PPC::Runtime::ASM::mflr(context->r0);
/*8045A36C 0045716C*/ PPC::Runtime::ASM::lis(context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045A370 00457170*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045A374 00457174*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045A378 00457178*/ PPC::Runtime::ASM::addi(context->r31, context->r5, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045A37C 0045717C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8045A380 00457180*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045A384 00457184*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8045A388 00457188*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5b8);
/*8045A38C 0045718C*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8045A390 00457190*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8045A394 00457194*/ PPC::Runtime::ASM::bl(fn_OSLockMutex);
/*8045A398 00457198*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_HighBit);
/*8045A39C 0045719C*/ PPC::Runtime::ASM::addi(context->r4, context->r3, STRUCT_BYTE4_COUNT_18059A880 @ Get_MemoryOffset_LowBit);
/*8045A3A0 004571A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r4));
/*8045A3A4 004571A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r4));
/*8045A3A8 004571A8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x1);
/*8045A3AC 004571AC*/ PPC::Runtime::ASM::slwi(context->r3, context->r4, 28);
/*8045A3B0 004571B0*/ PPC::Runtime::ASM::srwi(context->r4, context->r4, 31);
/*8045A3B4 004571B4*/ PPC::Runtime::ASM::subf(context->r3, context->r4, context->r3);
/*8045A3B8 004571B8*/ PPC::Runtime::ASM::rotlwi(context->r3, context->r3, 4);
/*8045A3BC 004571BC*/ PPC::Runtime::ASM::add(context->r30, context->r3, context->r4);
/*8045A3C0 004571C0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r30);
/*8045A3C4 004571C4*/ PPC::Runtime::ASM::bne(.L_8045A3D0);
/*8045A3C8 004571C8*/ PPC::Runtime::ASM::li(context->r29, -0x1);
/*8045A3CC 004571CC*/ PPC::Runtime::ASM::b(.L_8045A460);
RUNTIME_PPC_JUMP_LABEL(.L_8045A3D0, 0x8045A3D0) //this is a jump label
/*8045A3D0 004571D0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A3D4 004571D4*/ PPC::Runtime::ASM::li(context->r7, 0x7);
/*8045A3D8 004571D8*/ PPC::Runtime::ASM::li(context->r6, 0xb);
/*8045A3DC 004571DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045A3E0 004571E0*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A3E4 004571E4*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*8045A3E8 004571E8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A3EC 004571EC*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8045A3F0 004571F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A3F4 004571F4*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A3F8 004571F8*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A3FC 004571FC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8045A400 00457200*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A404 00457204*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A408 00457208*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A40C 0045720C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*8045A410 00457210*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A414 00457214*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x50);
/*8045A418 00457218*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*8045A41C 0045721C*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8045A420 00457220*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A424 00457224*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x50);
/*8045A428 00457228*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x14);
/*8045A42C 0045722C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8045A430 00457230*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*8045A434 00457234*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A438 00457238*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8045A43C 0045723C*/ PPC::Runtime::ASM::li(context->r5, 0x20);
/*8045A440 00457240*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0x50);
/*8045A444 00457244*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x34);
/*8045A448 00457248*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r3);
/*8045A44C 0045724C*/ PPC::Runtime::ASM::bl(fn_8045BCA4);
/*8045A450 00457250*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
/*8045A454 00457254*/ PPC::Runtime::ASM::li(context->r0, 0xb);
/*8045A458 00457258*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x598, context->r31));
/*8045A45C 0045725C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_8045A460, 0x8045A460) //this is a jump label
/*8045A460 00457260*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x5b8);
/*8045A464 00457264*/ PPC::Runtime::ASM::bl(fn_OSUnlockMutex);
/*8045A468 00457268*/ PPC::Runtime::ASM::bl(fn_8045BFAC);
/*8045A46C 0045726C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8045A470 00457270*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8045A474 00457274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8045A478 00457278*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8045A47C 0045727C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8045A480 00457280*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8045A484 00457284*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8045A488 00457288*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8045A48C 0045728C*/ PPC::Runtime::ASM::blr();
}