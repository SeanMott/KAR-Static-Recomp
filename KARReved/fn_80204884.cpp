//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_JObj_GetWorldPosition.hpp"



void fn_80204884(PPC::Runtime::GCContext* context)
{
/*80204884 00201684*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80204888 00201688*/ PPC::Runtime::ASM::mflr(context->r0);
/*8020488C 0020168C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80204890 00201690*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80204894 00201694*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80204898 00201698*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*8020489C 0020169C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802048A0 002016A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3e8, context->r31));
/*802048A4 002016A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802048A8 002016A8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*802048AC 002016AC*/ PPC::Runtime::ASM::lwzx(context->r3, context->r3, context->r0);
/*802048B0 002016B0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802048B4 002016B4*/ PPC::Runtime::ASM::beq(.L_802048E4);
/*802048B8 002016B8*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*802048BC 002016BC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802048C0 002016C0*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*802048C4 002016C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*802048C8 002016C8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*802048CC 002016CC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802048D0 002016D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f0);
/*802048D4 002016D4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802048D8 002016D8*/ PPC::Runtime::ASM::fmadds(context->f0, context->f2, context->f1, context->f0);
/*802048DC 002016DC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802048E0 002016E0*/ PPC::Runtime::ASM::b(.L_80204920);
RUNTIME_PPC_JUMP_LABEL(.L_802048E4, 0x802048E4) //this is a jump label
/*802048E4 002016E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2f8, context->r31));
/*802048E8 002016E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2fc, context->r31));
/*802048EC 002016EC*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E2314 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802048F0 002016F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802048F4 002016F4*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E2310 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802048F8 002016F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802048FC 002016FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*80204900 00201700*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80204904 00201704*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3ec, context->r31));
/*80204908 00201708*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2d8, context->r31));
/*8020490C 0020170C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*80204910 00201710*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f1);
/*80204914 00201714*/ PPC::Runtime::ASM::fmuls(context->f1, context->f3, context->f1);
/*80204918 00201718*/ PPC::Runtime::ASM::fmadds(context->f0, context->f4, context->f1, context->f0);
/*8020491C 0020171C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80204920, 0x80204920) //this is a jump label
/*80204920 00201720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80204924 00201724*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80204928 00201728*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8020492C 0020172C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80204930 00201730*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80204934 00201734*/ PPC::Runtime::ASM::blr();
}