//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fwide(PPC::Runtime::GCContext* context)
{
/*803B9984 003B6784*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803B9988 003B6788*/ PPC::Runtime::ASM::beq(.L_803B9998);
/*803B998C 003B678C*/ PPC::Runtime::ASM::lhz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/* 803B9990 003B6790  54 00 D7 7F */ extrwi. context->r0 , context->r0 , 3 , 23
/*803B9994 003B6794*/ PPC::Runtime::ASM::bne(.L_803B99A0);
RUNTIME_PPC_JUMP_LABEL(.L_803B9998, 0x803B9998) //this is a jump label
/*803B9998 003B6798*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803B999C 003B679C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803B99A0, 0x803B99A0) //this is a jump label
/*803B99A0 003B67A0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*803B99A4 003B67A4*/ PPC::Runtime::ASM::extrwi(context->r0, context->r5, 2, 26);
/*803B99A8 003B67A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*803B99AC 003B67AC*/ PPC::Runtime::ASM::beq(.L_803B9A04);
/*803B99B0 003B67B0*/ PPC::Runtime::ASM::bge(.L_803B99C0);
/*803B99B4 003B67B4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803B99B8 003B67B8*/ PPC::Runtime::ASM::bge(.L_803B99CC);
/*803B99BC 003B67BC*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803B99C0, 0x803B99C0) //this is a jump label
/*803B99C0 003B67C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*803B99C4 003B67C4*/ PPC::Runtime::ASM::bgelr();
/*803B99C8 003B67C8*/ PPC::Runtime::ASM::b(.L_803B99FC);
RUNTIME_PPC_JUMP_LABEL(.L_803B99CC, 0x803B99CC) //this is a jump label
/*803B99CC 003B67CC*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*803B99D0 003B67D0*/ PPC::Runtime::ASM::ble(.L_803B99E4);
/*803B99D4 003B67D4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*803B99D8 003B67D8*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 4, 26, 27);
/*803B99DC 003B67DC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
/*803B99E0 003B67E0*/ PPC::Runtime::ASM::b(.L_803B99F4);
RUNTIME_PPC_JUMP_LABEL(.L_803B99E4, 0x803B99E4) //this is a jump label
/*803B99E4 003B67E4*/ PPC::Runtime::ASM::bge(.L_803B99F4);
/*803B99E8 003B67E8*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803B99EC 003B67EC*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r0, 4, 26, 27);
/*803B99F0 003B67F0*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803B99F4, 0x803B99F4) //this is a jump label
/*803B99F4 003B67F4*/ PPC::Runtime::ASM::mr(context->r3, context->r4);
/*803B99F8 003B67F8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803B99FC, 0x803B99FC) //this is a jump label
/*803B99FC 003B67FC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803B9A00 003B6800*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803B9A04, 0x803B9A04) //this is a jump label
/*803B9A04 003B6804*/ PPC::Runtime::ASM::li(context->r3, -0x1);
/*803B9A08 003B6808*/ PPC::Runtime::ASM::blr();
}