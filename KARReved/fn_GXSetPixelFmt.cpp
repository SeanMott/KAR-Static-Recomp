//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_GXSetPixelFmt(PPC::Runtime::GCContext* context)
{
/*803CF938 003CC738*/ PPC::Runtime::ASM::lwz(context->r7, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CF93C 003CC73C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F9FD0 @ Get_MemoryOffset_HighBit);
/*803CF940 003CC740*/ PPC::Runtime::ASM::slwi(context->r6, context->r3, 2);
/*803CF944 003CC744*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F9FD0 @ Get_MemoryOffset_LowBit);
/*803CF948 003CC748*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r7));
/*803CF94C 003CC74C*/ PPC::Runtime::ASM::add(context->r10, context->r0, context->r6);
/*803CF950 003CC750*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803CF954 003CC754*/ PPC::Runtime::ASM::clrrwi(context->r6, context->r8, 3);
/*803CF958 003CC758*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 3);
/*803CF95C 003CC75C*/ PPC::Runtime::ASM::or(context->r4, context->r6, context->r5);
/*803CF960 003CC760*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r7));
/*803CF964 003CC764*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r7));
/*803CF968 003CC768*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 29, 25);
/*803CF96C 003CC76C*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CF970 003CC770*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r7));
/*803CF974 003CC774*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1dc, context->r7));
/*803CF978 003CC778*/ PPC::Runtime::ASM::cmplw(context->r8, context->r5);
/*803CF97C 003CC77C*/ PPC::Runtime::ASM::beq(.L_803CF9C8);
/*803CF980 003CC780*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CF984 003CC784*/ PPC::Runtime::ASM::lis(context->r4, 0xcc01);
/*803CF988 003CC788*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CF98C 003CC78C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x2);
/*803CF990 003CC790*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r4));
/*803CF994 003CC794*/ PPC::Runtime::ASM::bne(.L_803CF9A0);
/*803CF998 003CC798*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803CF99C 003CC79C*/ PPC::Runtime::ASM::b(.L_803CF9A4);
RUNTIME_PPC_JUMP_LABEL(.L_803CF9A0, 0x803CF9A0) //this is a jump label
/*803CF9A0 003CC7A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803CF9A4, 0x803CF9A4) //this is a jump label
/*803CF9A4 003CC7A4*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CF9A8 003CC7A8*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r0, 24, 9);
/*803CF9AC 003CC7AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r5));
/*803CF9B0 003CC7B0*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 23, 21);
/*803CF9B4 003CC7B4*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*803CF9B8 003CC7B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x204, context->r5));
/*803CF9BC 003CC7BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
/*803CF9C0 003CC7C0*/ PPC::Runtime::ASM::ori(context->r0, context->r0, 0x4);
/*803CF9C4 003CC7C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4f4, context->r5));
RUNTIME_PPC_JUMP_LABEL(.L_803CF9C8, 0x803CF9C8) //this is a jump label
/*803CF9C8 003CC7C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r10));
/*803CF9CC 003CC7CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*803CF9D0 003CC7D0*/ PPC::Runtime::ASM::bne(.L_803CFA10);
/*803CF9D4 003CC7D4*/ PPC::Runtime::ASM::lwz(context->r5, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CF9D8 003CC7D8*/ PPC::Runtime::ASM::subi(context->r3, context->r3, 0x4);
/*803CF9DC 003CC7DC*/ PPC::Runtime::ASM::li(context->r0, 0x61);
/*803CF9E0 003CC7E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*803CF9E4 003CC7E4*/ PPC::Runtime::ASM::rlwinm(context->r4, context->r4, 0, 23, 20);
/*803CF9E8 003CC7E8*/ PPC::Runtime::ASM::rlwimi(context->r4, context->r3, 9, 21, 22);
/*803CF9EC 003CC7EC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*803CF9F0 003CC7F0*/ PPC::Runtime::ASM::lis(context->r3, 0xcc01);
/*803CF9F4 003CC7F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*803CF9F8 003CC7F8*/ PPC::Runtime::ASM::clrlwi(context->r4, context->r4, 8);
/*803CF9FC 003CC7FC*/ PPC::Runtime::ASM::oris(context->r4, context->r4, 0x4200);
/*803CFA00 003CC800*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*803CFA04 003CC804*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
/*803CFA08 003CC808*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d4, context->r5));
/*803CFA0C 003CC80C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8000, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803CFA10, 0x803CFA10) //this is a jump label
/*803CFA10 003CC810*/ PPC::Runtime::ASM::lwz(context->r3, gx @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803CFA14 003CC814*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*803CFA18 003CC818*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r3));
/*803CFA1C 003CC81C*/ PPC::Runtime::ASM::blr();
}