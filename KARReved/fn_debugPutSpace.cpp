//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_debugPutSpace(PPC::Runtime::GCContext* context)
{
/*800AB50C 000A830C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*800AB510 000A8310*/ PPC::Runtime::ASM::cmpw(context->r5, context->r4);
/*800AB514 000A8314*/ PPC::Runtime::ASM::bgt(.L_800AB520);
/*800AB518 000A8318*/ PPC::Runtime::ASM::subi(context->r4, context->r5, 0x1);
/*800AB51C 000A831C*/ PPC::Runtime::ASM::b(.L_800AB52C);
RUNTIME_PPC_JUMP_LABEL(.L_800AB520, 0x800AB520) //this is a jump label
/*800AB520 000A8320*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*800AB524 000A8324*/ PPC::Runtime::ASM::bge(.L_800AB52C);
/*800AB528 000A8328*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800AB52C, 0x800AB52C) //this is a jump label
/*800AB52C 000A832C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*800AB530 000A8330*/ PPC::Runtime::ASM::blr();
}