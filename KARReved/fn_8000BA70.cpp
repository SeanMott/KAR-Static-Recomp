//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8000BA70(PPC::Runtime::GCContext* context)
{
/*8000BA70 00008870*/ PPC::Runtime::ASM::lis(context->r4, ByteArray_4 @ Get_MemoryOffset_HighBit);
/*8000BA74 00008874*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*8000BA78 00008878*/ PPC::Runtime::ASM::addi(context->r4, context->r4, ByteArray_4 @ Get_MemoryOffset_LowBit);
/*8000BA7C 0000887C*/ PPC::Runtime::ASM::extsb(context->r3, context->r3);
/*8000BA80 00008880*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8000BA84 00008884*/ PPC::Runtime::ASM::mtctr(context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8000BA88, 0x8000BA88) //this is a jump label
/*8000BA88 00008888*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*8000BA8C 0000888C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BA90 00008890*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BA94 00008894*/ PPC::Runtime::ASM::bne(.L_8000BAA0);
/*8000BA98 00008898*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BA9C 0000889C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BAA0, 0x8000BAA0) //this is a jump label
/*8000BAA0 000088A0*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BAA4 000088A4*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BAA8 000088A8*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BAAC 000088AC*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BAB0 000088B0*/ PPC::Runtime::ASM::bne(.L_8000BABC);
/*8000BAB4 000088B4*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BAB8 000088B8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BABC, 0x8000BABC) //this is a jump label
/*8000BABC 000088BC*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BAC0 000088C0*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BAC4 000088C4*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BAC8 000088C8*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BACC 000088CC*/ PPC::Runtime::ASM::bne(.L_8000BAD8);
/*8000BAD0 000088D0*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BAD4 000088D4*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BAD8, 0x8000BAD8) //this is a jump label
/*8000BAD8 000088D8*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BADC 000088DC*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BAE0 000088E0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BAE4 000088E4*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BAE8 000088E8*/ PPC::Runtime::ASM::bne(.L_8000BAF4);
/*8000BAEC 000088EC*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BAF0 000088F0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BAF4, 0x8000BAF4) //this is a jump label
/*8000BAF4 000088F4*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BAF8 000088F8*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BAFC 000088FC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BB00 00008900*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BB04 00008904*/ PPC::Runtime::ASM::bne(.L_8000BB10);
/*8000BB08 00008908*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BB0C 0000890C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BB10, 0x8000BB10) //this is a jump label
/*8000BB10 00008910*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BB14 00008914*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BB18 00008918*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BB1C 0000891C*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BB20 00008920*/ PPC::Runtime::ASM::bne(.L_8000BB2C);
/*8000BB24 00008924*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BB28 00008928*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BB2C, 0x8000BB2C) //this is a jump label
/*8000BB2C 0000892C*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BB30 00008930*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BB34 00008934*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BB38 00008938*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BB3C 0000893C*/ PPC::Runtime::ASM::bne(.L_8000BB48);
/*8000BB40 00008940*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BB44 00008944*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BB48, 0x8000BB48) //this is a jump label
/*8000BB48 00008948*/ PPC::Runtime::ASM::lbzu(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1, context->r4));
/*8000BB4C 0000894C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BB50 00008950*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8000BB54 00008954*/ PPC::Runtime::ASM::cmpw(context->r3, context->r0);
/*8000BB58 00008958*/ PPC::Runtime::ASM::bne(.L_8000BB64);
/*8000BB5C 0000895C*/ PPC::Runtime::ASM::extsb(context->r3, context->r5);
/*8000BB60 00008960*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8000BB64, 0x8000BB64) //this is a jump label
/*8000BB64 00008964*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x1);
/*8000BB68 00008968*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8000BB6C 0000896C*/ PPC::Runtime::ASM::bdnz(.L_8000BA88);
/*8000BB70 00008970*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*8000BB74 00008974*/ PPC::Runtime::ASM::blr();
}