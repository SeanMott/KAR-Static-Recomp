//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8039FBC4(PPC::Runtime::GCContext* context)
{
/*8039FBC4 0039C9C4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039FBC8 0039C9C8*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039FBCC 0039C9CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039FBD0 0039C9D0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039FBD4 0039C9D4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039FBD8 0039C9D8*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8039FBDC 0039C9DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039FBE0 0039C9E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039FBE4 0039C9E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039FBE8 0039C9E8*/ PPC::Runtime::ASM::bctrl();
/*8039FBEC 0039C9EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039FBF0 0039C9F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039FBF4 0039C9F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039FBF8 0039C9F8*/ PPC::Runtime::ASM::bctrl();
/*8039FBFC 0039C9FC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039FC00 0039CA00*/ PPC::Runtime::ASM::b(.L_8039FC68);
RUNTIME_PPC_JUMP_LABEL(.L_8039FC04, 0x8039FC04) //this is a jump label
/*8039FC04 0039CA04*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039FC08 0039CA08*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039FC0C 0039CA0C*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC444 @ Get_MemoryOffset_SDA21);
/*8039FC10 0039CA10*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039FC14 0039CA14*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039FC18 0039CA18*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039FC1C 0039CA1C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8039FC20 0039CA20*/ PPC::Runtime::ASM::beq(.L_8039FC50);
/*8039FC24 0039CA24*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8039FC28 0039CA28*/ PPC::Runtime::ASM::bne(.L_8039FC4C);
/*8039FC2C 0039CA2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039FC30 0039CA30*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8039FC34 0039CA34*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC444 @ Get_MemoryOffset_SDA21);
/*8039FC38 0039CA38*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC3D8 @ Get_MemoryOffset_SDA21);
/*8039FC3C 0039CA3C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8039FC40 0039CA40*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*8039FC44 0039CA44*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r3));
/*8039FC48 0039CA48*/ PPC::Runtime::ASM::b(.L_8039FC74);
RUNTIME_PPC_JUMP_LABEL(.L_8039FC4C, 0x8039FC4C) //this is a jump label
/*8039FC4C 0039CA4C*/ PPC::Runtime::ASM::subi(context->r30, context->r30, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8039FC50, 0x8039FC50) //this is a jump label
/*8039FC50 0039CA50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8039FC54 0039CA54*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8039FC58 0039CA58*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039FC5C 0039CA5C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039FC60 0039CA60*/ PPC::Runtime::ASM::bctrl();
/*8039FC64 0039CA64*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039FC68, 0x8039FC68) //this is a jump label
/*8039FC68 0039CA68*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8039FC6C 0039CA6C*/ PPC::Runtime::ASM::bne(.L_8039FC04);
/*8039FC70 0039CA70*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8039FC74, 0x8039FC74) //this is a jump label
/*8039FC74 0039CA74*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039FC78 0039CA78*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039FC7C 0039CA7C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039FC80 0039CA80*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039FC84 0039CA84*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039FC88 0039CA88*/ PPC::Runtime::ASM::blr();
}